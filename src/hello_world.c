#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int *a = 10;
const char *savedata_filename = "savedata.tox";

void main()
{
    printf("a = %d \n", a);
    printf("%s\n", savedata_filename);
    printf("Hello world\n");
}
