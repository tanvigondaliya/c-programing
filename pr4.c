#include<stdio.h>
#include<limits.h>
#include<float.h>
#include<stddef.h>
#include<stdint.h>
int main()
{
    printf("=== data type sizes and ranges in c ===\n\n");

    //char
    printf("char: \n");
    printf("size: %zu bytes\n", sizeof(char));
    printf("range: %d\n\n", CHAR_MIN,CHAR_MAX);

    //UNSIGNED CHAR
    printf("unsigned char:\n");
    printf("size: %zu bytes\n", sizeof(unsigned char));
    printf("range:0 to %u\n\n", UCHAR_MAX);

    //INT
    printf("int:\n");
    printf("size: %zu bytes\n", sizeof(int));
    printf("range:%d to %d\n\n", INT_MIN,INT_MAX);

    //UNSIGNED INT

    printf("unsigned int:\n");
    printf("size: %zu bytes\n", sizeof(unsigned int));
    printf("range:%d to %d\n\n", UINT_MAX);

    //SHORT

    printf("short:\n");
    printf("size: %zu bytes\n", sizeof(short));
    printf("range:%d to %d\n\n", SHRT_MIN,SHRT_MAX);

    //LONG

    printf("long:\n");
    printf("size: %zu bytes\n", sizeof(long));
    printf("range:%d to %d\n\n", LONG_MIN,LONG_MAX);

    //LONG LONG

    printf("long long:\n");
    printf("size: %zu bytes\n", sizeof(long long));
    printf("range:%d to %d\n\n", LLONG_MIN,LLONG_MAX);

    //UNSIGNED LONG
    printf("unsigned long:\n");
    printf("size: %zu bytes\n", sizeof(unsigned long));
    printf("range:%d to %d\n\n", ULONG_MAX);

    //FLOAT
    printf("float");
    printf("size: %zu bytes\n", sizeof(float));
    printf("range:%d to %d\n\n",FLT_MIN,FLT_MAX);

    //DOUBLE
    printf("double:\n");
    printf("size: %zu bytes\n", sizeof(double));
    printf("range:%d to %d\n\n", DBL_MIN,DBL_MAX);

    //LONG DOUBLE
    printf("long double:\n");
    printf("size: %zu bytes\n", sizeof(long double));
    printf("range:%d to %d\n\n", LDBL_MIN,LDBL_MAX);

    //size_t
    printf("size_t:\n");
    printf("size: %zu bytes\n", sizeof(size_t));
    printf("range:%d to %d\n\n", (size_t) -1);

    //ptrdiff_t
    //ptrdiff_t
    printf("ptrdiff_t:\n");
    printf("size: %zu bytes\n", sizeof(ptrdiff_t));
    printf("range:%d to %d\n\n", PTRDIFF_MIN,PTRDIFF_MAX);

    return 0;

}
