#include <stdio.h>
#include <stdlib.h>
#include "set.h"

int main() {
    Set s1 ;
    Set s2;
    Set s3;
    setType e ;
    createSet(&s1);
    createSet(&s2);
    createSet(&s3);

    printf("\n%d",insertSet(&s1,6 ));
    printf("\n%d",insertSet(&s1,4 ));
    printf("\n%d",insertSet(&s1,5 ));
    printf("\n%d",insertSet(&s1,7 ));
    printf("\n%d",insertSet(&s2,5 ));
    printf("\n%d",insertSet(&s2,4 ));
    printf("\n%d",insertSet(&s2,1 ));

    printSet(&s1);
    printSet(&s2);
    printf("\n%d 2 added to the set",insertSet(&s1,2 ));
    printf("\n%d 2 already exist ",insertSet(&s1,2 ));
    printf("\n%d intersection ",intersectionSet(&s1,&s2, &s3));
    printSet(&s1);
    printSet(&s2);
    printSet(&s3);
    createSet(&s3);
    printf("\n%d size of s3 ",cardinalitySet(&s3));
    printf("\n%d union ",unionSet(&s1,&s2, &s3));
    printf("\n%d size of s3 ",cardinalitySet(&s3));
    printf("\n%d in the set  ",isInSet(&s3, 2));
    return 0;
}