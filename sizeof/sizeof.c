#include <stdio.h>
#include <stddef.h>
#include <inttypes.h>

typedef struct st1 {
    char ch;
    int i;
} st1;

struct st2 {
    int i;
    char ch;
} st2;

struct st3 {
    char ch;
    st1 s1;
    char ch1;
} st3;


int main(){
    printf(" st1 \t %lu\n", sizeof(st1));
    printf(" st2 \t %zu\n", sizeof(st2));
    printf(" st3 \t %ld\n", sizeof(st3));
    printf(" offset of s1 \t %ld\n", offsetof(struct st3, s1));

    printf(" char \t %ld\n", sizeof(char));
    printf(" signed char \t %ld\n", sizeof(signed char));
    printf(" unsigned char \t %ld\n", sizeof(unsigned char));

    printf(" int \t %ld\n", sizeof(int));
    printf(" signed int \t %ld\n", sizeof(signed int));
    printf(" unsigned int \t %ld\n", sizeof(unsigned int));

    printf(" long \t %ld\n", sizeof(long));
    printf(" size_t \t %ld\n", sizeof(size_t));
    printf(" uint8_t \t %ld\n", sizeof(uint8_t));
    printf(" uint16_t \t %ld\n", sizeof(uint16_t));
    printf(" uint32_t \t %ld\n", sizeof(uint32_t));
    printf(" uint64_t \t %ld\n", sizeof(uint64_t));

    printf(" float \t %ld\n", sizeof(float));
    printf(" double \t %ld\n", sizeof(double));
    return 0;
}
