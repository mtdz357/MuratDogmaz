#include <stdio.h>
#include <math.h>

int computeHomeValue (int popularity, int size);

int main(void)
{
    int popularity , size , HouseValue ;

    printf("Please Enter The Popularity\n");
    scanf("%d", &popularity);
    printf("Please Enter The Size Of The House \n");
    scanf("%d", &size);

    HouseValue = computeHomeValue(popularity,size);
    printf("The House price is %d\n", HouseValue);


    return(0);



}

int computeHomeValue (int popularity, int size)
{
    int price;
    price = (pow(popularity,3) + pow(size,2)) * 10000 ;

}