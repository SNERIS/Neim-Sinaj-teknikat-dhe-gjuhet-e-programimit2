#include<stdio.h>
int main () {
    int piket;
    char nota;
    printf("Jepni noten ne forme numerike: ");
    scanf("%d", &piket);

    switch (piket / 10)
    {
    case 10:
    case 9:
        nota = 'A';
        break;
    case 8:
        nota = 'B';
        break;
    case 7:
        nota = 'C';
        break;
    case 6:
        nota = 'D';
        break;
    default:
        nota = 'F';
        break;
    }
    printf("Nota me shkronje: %c.\n", nota);
    return 0;
}