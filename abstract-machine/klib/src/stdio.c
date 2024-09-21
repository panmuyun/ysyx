#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

void itoa(int value, char* str, int base) { // 将整数转换为字符串（辅助函数）
    char *ptr = str, *ptr1 = str, tmp_char;
    int tmp_value;

    if (value < 0 && base == 10) {  // 处理以 10 为基数的负整数
        *ptr++ = '-';
        value = -value;
    }
    
    do {  // 处理每一个数字
        tmp_value = value;
        value /= base;
        *ptr++ = "0123456789ABCDEF"[tmp_value - value * base];
    } while (value);

    *ptr-- = '\0';  // 终止符

    while (ptr1 < ptr) {  // 反转字符串
        tmp_char = *ptr;
        *ptr = *ptr1;
        *ptr1 = tmp_char;
        ptr--;
        ptr1++;
    }
}



int printf(const char *fmt, ...) {
  // panic("Not implemented");
  char buffer[32]; // 用于数字转换的临时缓冲区
  va_list args;
  va_start(args, fmt);  // 初始化 va_list，指向可变参数
  const char *p = fmt;
  int total_chars = 0;
  
  while (*p) {
    if (*p == '%') {  
      p++;
      switch (*p) {
        case 'd': // 整数
        {
            int num = va_arg(args, int);
            itoa(num, buffer, 10);
            putstr(buffer);
            total_chars += strlen(buffer);
            break;
        }
        case 's': // 字符串
        {
            const char *str = va_arg(args, const char*);
            putstr(str);
            total_chars += strlen(str);
            break;
        }
        default:
            // 处理未知格式说明符（可能会输出警告）
            putch('%');
            putch(*p);
            total_chars += 2;
            break;
      }
    } else {
      putch(*p);
      total_chars++;
    }
    p++;
  }
  return total_chars;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
  // panic("Not implemented");
  // memset(out, '\0', sizeof(out));
  char buffer[32]; // 用于数字转换的临时缓冲区
  va_list args;
  va_start(args, fmt);  // 初始化 va_list，指向可变参数
  char *pout = out;
  const char *p = fmt;
  int total_chars = 0;
  
  while (*p) {
    if (*p == '%') {  
      p++;
      switch (*p) {
        case 'd': // 整数
        {
            int num = va_arg(args, int);
            itoa(num, buffer, 10);
            strcpy(pout,buffer);
            pout += strlen(buffer);
            total_chars += strlen(buffer);
            break;
        }
        // case 'x': // 十六进制数
        // {
        //     int num = va_arg(args, int);
        //     itoa(num, buffer, 16);
        //     strcpy(pout,buffer);
        //     pout += strlen(buffer);
        //     total_chars += strlen(buffer);
        //     break;
        // }
        case 's': // 字符串
        {
            const char *str = va_arg(args, const char*);
            strcpy(pout,str);
            pout += strlen(str);
            total_chars += strlen(str);
            break;
        }
        // case 'c': // 字符
        // {
        //     char ch = (char)va_arg(args, int);
        //     *pout = ch;
        //     pout ++;
        //     total_chars++;
        //     break;
        // }
        default:
            // 处理未知格式说明符（可能会输出警告）
            *pout = '%';
            pout++;
            *pout = *p;
            pout++;
            total_chars += 2;
            break;
      }
    } else {
      *pout = *p;
      pout++;
      total_chars++;
    }
    p++;
  }
  *pout = '\0';
  return total_chars;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
