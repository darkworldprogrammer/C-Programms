
Here's a list of some common functions and values used in string manipulation in C:

(1)
strlen(): Returns the length of a string.
size_t strlen(const char *str);

(2)
strcpy(): Copies one string to another.
char *strcpy(char *dest, const char *src);

(3)
strcat(): Concatenates (appends) one string to another.
char *strcat(char *dest, const char *src);

(4)
strcmp(): Compares two strings.
int strcmp(const char *str1, const char *str2);

(5)
strncmp(): Compares the first n characters of two strings.
int strncmp(const char *str1, const char *str2, size_t n);

(6)
strchr(): Finds the first occurrence of a character in a string.
char *strchr(const char *str, int c);

(7)
strrchr(): Finds the last occurrence of a character in a string.
char *strrchr(const char *str, int c);

(8)
strstr(): Finds the first occurrence of a substring in a string.
char *strstr(const char *haystack, const char *needle);

(9)
strtok(): Splits a string into tokens based on delimiters.
char *strtok(char *str, const char *delim);

(10)
sprintf(): Prints formatted data to a string.
int sprintf(char *str, const char *format, ...);

(11)
snprintf(): Prints formatted data to a string with a specified maximum length.
int snprintf(char *str, size_t size, const char *format, ...);

(12)
strncpy(): Copies a certain amount of characters from one string to another.
char *strncpy(char *dest, const char *src, size_t n);


[Value	Description]:------
(1) '\n': Newline character.
(2) '\t': Tab character.
(3) '\0' (null character): Represents the end of a string.
(4) EOF (End of File): Indicates the end of input.
(5) SIZE_MAX: Maximum value of size_t.
(6) NULL: Pointer to no object.