#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int num,gnum,attempt=1;
    srand(time(0));
    num=rand()%100+1;
    // printf("random number: %d\n",num);
    do
    {
        printf("Guess a number: ");
        scanf("%d",&gnum);
        if(num>gnum)
        printf("Higher number please\n");
        else if(num<gnum)
        printf("Lower number please\n");
        else
        printf("You guessed the correct number in %d attempts\n",attempt);
        attempt=attempt+1;
    }while(gnum!=num);
    return 0;
}
