#include "main.h"

int main(void)
{
char *s = "hello, world of demons";
char *f = "world";
char *t;

t = _strstr(s, f);
printf("%s\n", t);
return (0);
}

