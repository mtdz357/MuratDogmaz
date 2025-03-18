#include <stdio.h>
#include <math.h>



int main(void)
{
    int popularity , size , HouseValue ;

    printf("Please Enter The Popularity\n");
    scanf("%d", &popularity);
    printf("Please Enter The Size Of The House \n");
    scanf("%d", &size);

    HouseValue = (pow(popularity,3) + pow(size,2)) * 10000 ;
    printf("The Price Of Your House is %d \n", HouseValue);



    return(0);



}