#include <stdio.h>
#include <stdlib.h>
enum {
    DSL= 0b0001,
    ppp = 0b0010,
    LINK = 0b0100,
};
union {
    struct {
        unsigned int DSL : 1;
        unsigned int ppp : 1;
        unsigned int Link : 1;
    };
    unsigned int flags;
} cond;

int main() {
    scanf("%x", &cond.flags);
    if (cond.DSL)
        printf("DSL is on\n");
    else
        printf("DSL is off\n");
    
    if (cond.ppp)
        printf("ppp is on\n");
    else
        printf("ppp is off\n");
    
    if (cond.Link)
        printf("Link is on\n");
    else
        printf("Link is off\n");

    return 0;
}