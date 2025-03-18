#include <stdio.h>
#include <math.h>

void computeHomeValue (void);

int main(void)
{
    computeHomeValue();


    return(0);

}

void computeHomeValue (void)
{
    int popularity , size , HouseValue ;

    printf("Please Enter The Popularity\n");
    scanf("%d", &popularity);
    printf("Please Enter The Size Of The House \n");
    scanf("%d", &size);
    HouseValue = (pow(popularity,3) + pow(size,2)) * 10000 ;
    printf("The House price is %d\n", HouseValue);
    

}