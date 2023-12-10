#include <stdio.h>
#include <stdlib.h>
#include "DSList.h"

int main()
{
    DSList list;
    createDSL(&list);
    DSLType firstData = {10, 'A'}, secondData = {30, 'C'}, thirdData = {20, 'B'}
    , fourthData = {50, 'E'}, fifthData = {40, 'D'}, sixthData = {5, '#'};
    insertDSL(&list, firstData);
    insertDSL(&list, secondData);
    insertDSL(&list, thirdData);
    printDSL(&list);
    insertDSL(&list, fourthData);
    insertDSL(&list, fifthData);
    insertDSL(&list, sixthData);
    printf("\n");
    printDSL(&list);
    printf("\n");
    eraseDSL(&list, 10);
    printDSL(&list);
    return 0;
}
