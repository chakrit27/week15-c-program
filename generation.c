#include<stdio.h>
int checkgen(){
    int born = 2539;
    printf("Enter Born of Age : ");
    scanf("%d",&born);
    if(born >= 2541)
    {
        printf("Generation Z ");
    }
    else if(born >= 2523 && born <= 2540)
    {
        printf("Generation Y ");
    }
    else if(born >= 2508 && born <= 2522)
    {
        printf("Generation X ");
    }
    else
    {
        printf("Enter new Born : ");
    }
    return 0;
}
