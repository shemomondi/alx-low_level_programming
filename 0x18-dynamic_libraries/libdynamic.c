#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int _putchar(char c) {
return putchar(c);
}

int _islower(int c) {
return islower(c);
}

int _isalpha(int c) {
return isalpha(c);
}

int _abs(int n) {
return abs(n);
}

int _isupper(int c) {
return isupper(c);
}

int _isdigit(int c) {
return isdigit(c);
}

int _strlen(char *s) {
int len = 0;
while (*s != '\0') {
len++;
s++;
}
return len;
}

void _puts(char *s) {
puts(s);
}

char *_strcpy(char *dest, char *src) {
char *temp = dest;
while ((*temp++ = *src++) != '\0');
return dest;
}

int _atoi(char *s) {
int num = 0;
int sign = 1;
if (*s == '-') {
sign = -1;
s++;
}
while (*s != '\0') {
num = num * 10 + (*s - '0');
s++;
}
return num * sign;
}

char *_strcat(char *dest, char *src) {
char *temp = dest;
while (*temp != '\0') {
temp++;
}
while (*src != '\0') {
*temp++ = *src++;
}
*temp = '\0';
return dest;
}

char *_strncat(char *dest, char *src, int n) {
char *temp = dest;
while (*temp != '\0') {
temp++;
}
while (*src != '\0' && n > 0) {
*temp++ = *src++;
n--;
}
*temp = '\0';
return dest;
}

char *_strncpy(char *dest, char *src, int n) {
char *temp = dest;
while (*src != '\0' && n > 0) {
*temp++ = *src++;
n--;
}
while (n > 0) {
*temp++ = '\0';
n--;
}
return dest;
}

int _strcmp(char *s1, char *s2) {
while (*s1 != '\0' && *s2 != '\0') {
if (*s1 != *s2) {
return *s1 - *s2;
}
s1++;
s2++;
}
return *s1 - *s2;
}

char *_memset(char *s, char b, unsigned int n) {
char *temp = s;
while (n > 0) {
*temp++ = b;
n--;
}
return s;
}

char *_memcpy(char *dest, char *src, unsigned int n) {
char *temp_dest = dest;
char *temp_src = src;
while (n > 0) {
*temp_dest++ = *temp_src++;
n--;
}
return dest;
}

char *_strchr(char *s, char c) {
while (*s != '\0') {
if (*s == c) {
return s;
}
s++;
}
if (*s == c) {
return s;
}
return NULL;
}

unsigned int _strspn(char *s, char *accept) {
unsigned int count = 0;
while (*s != '\0' && strchr(accept, *s) != NULL) {
count++;
s++;
}
return count;
}

char *_strpbrk(char *s, char *accept) {
while (*s != '\0') {
if (strchr(accept, *s) != NULL) {
return s;
}
s++;
}
return NULL;
}

char *_strstr(char *haystack, char *needle) {
while (*haystack != '\0') {
char *temp_haystack = haystack;
char *temp_needle = needle;
while (*temp_haystack == *temp_needle && *temp_needle != '\0') {
temp_haystack++;
temp_needle++;
}
if (*temp_needle == '\0') {
return haystack;
}
haystack++;
}
return NULL;
}
