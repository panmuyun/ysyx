#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  // panic("Not implemented");
  size_t len = 0;
  while (s[len]!='\0')
    len++;
  return len;
}

char *strcpy(char *dst, const char *src) {
  // panic("Not implemented");
  char *d = dst;  //保存起始地址
  while((*dst++ = *src++) != '\0');
  return d;
}

char *strncpy(char *dst, const char *src, size_t n) {
  // panic("Not implemented");
  size_t i;
  for (i = 0; i < n && src[i] != '\0'; i++) // 将 s2 的字符复制到 s1 中，最多复制 n 个字符
  {
      dst[i] = src[i];
  }
  for ( ; i < n; i++) // 如果 s2 长度小于 n，填充剩余的字符为 '\0'
  {
    dst[i] = '\0';
  }
  
  return dst;
}

char *strcat(char *dst, const char *src) {
  // panic("Not implemented");
  size_t len = strlen(dst);
  strcpy(dst+len, src);
  return dst;
}

int strcmp(const char *s1, const char *s2) {
  // panic("Not implemented");
  const char *l = s1; //防止源指针指向的位置被修改
  const char *r = s2;
  while (*l && (*l == *r)) {
    l++;
    r++;
  }
                                                      // 用 (unsigned char) 强制转换是为了确保字符比较时不会因为符号位影响比较结果
  return *(unsigned char *)l - *(unsigned char *)r; // 返回两字符的差值
}

int strncmp(const char *s1, const char *s2, size_t n) {
  // panic("Not implemented");
  size_t i;

  for (i = 0; i < n; i++) {
    // 如果两个字符不同，或者遇到了终止符 '\0'
    if (s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0') {
        return (unsigned char)s1[i] - (unsigned char)s2[i];
    }
  }

  // 如果前 n 个字符都相同
  return 0;
}

void *memset(void *s, int c, size_t n) {
  // panic("Not implemented");
  unsigned char *ptr = (unsigned char *)s;  // 转换为 unsigned char 指针
  for (size_t i = 0; i < n; i++) {
      ptr[i] = (unsigned char)c;  // 将值 c 转换为 unsigned char 类型后填充
  }
  return s;  // 返回原始指针
}

void *memmove(void *dst, const void *src, size_t n) {
  // panic("Not implemented");
  unsigned char *d = (unsigned char *)dst;
  const unsigned char *s = (const unsigned char *)src;
  if(d == s)
    return dst;

  if((s<d) && (s+n > d)){ //源在目标之前，且与目标有重叠部分，按反序复制
    s += n;
    d += n;
    while (n--)
    {
      *(--d) = *(--s);
    }
  } else {  //源在目标之后 或者 不重叠，按正常顺序复制
    while (n--)
    {
      *(d++) = *(s++);
    }
  }
  return dst;
}

void *memcpy(void *out, const void *in, size_t n) {
  // panic("Not implemented");
  char *dst = (char *)out;
  const char *src = (const char *)in;
  for (size_t i = 0; i < n; i++)
  {
    dst[i] = src[i];
  }
  return out;
}

int memcmp(const void *s1, const void *s2, size_t n) {
  // panic("Not implemented");
  const unsigned char *p1 = (const unsigned char *)s1;
  const unsigned char *p2 = (const unsigned char *)s2;

  // 遍历 n 个字节，逐个比较
  for (size_t i = 0; i < n; i++) {
      if (p1[i] != p2[i]) {
          // 如果不相等，根据差值返回正数或负数
          return p1[i] - p2[i];
      }
  }

  // 如果前 n 个字节相等，返回 0
  return 0;
}

#endif
