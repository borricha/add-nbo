// sum이라는 함수 정의
//HBO NBO 바꾸는 것도 여기서? -> #include <netinet/in.h> 사용

#include "sum.h"
#include <netinet/in.h>
#include <stdio.h>

void sum(uint32_t a, uint32_t b)
{
    //printf(" %u(%#x) + %u(%#x) = %u(%#x)", ntohs(a), ntohs(b), ntohs(a+b));
    printf(" %u(%#x) + %u(%#x) = %u(%#x)\n", htonl(a), htonl(a), htonl(b), htonl(b), (htonl(a) + htonl(b)), (htonl(a) + htonl(b)));
}
