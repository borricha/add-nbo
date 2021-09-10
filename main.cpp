 // sum() 출력 
// fread, fopen으로 숫자 받아오기
#include <stdio.h>
#include "sum.h"

int main(int argc, char** argv)
{
    FILE* fp;
    uint32_t a = 0;
    uint32_t b = 0;
    uint32_t size = 0;
    size = sizeof(uint32_t);

    fp = fopen(argv[1], "rb");
    fread(&a, size, 1, fp);
    fclose(fp);


    //FILE* fp;
    fp = fopen(argv[2], "rb");
    fread(&b, size, 1, fp);
    fclose(fp);

    sum(a, b);
}
