#include<stdio.h>

int main(){
    printf("Enter height is inches: ");

    int height;
    scanf("%d", &height);

    int newHeightInFoot = height/ 12;
    int newHeightInInche = height % 12;

    printf("Your Height is %d feet and %d inch", newHeightInFoot, newHeightInInche);

    return 0;
}
