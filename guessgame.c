/* I create a program that generates a random number and asks the player to guess it. if the 
player's guess is heigher than the actual no., the program display "lower no. please"
similarily if the user guess is too low, the program prints "higher no. please"
when the user guess the correct no.
the program displays the no of guess the player used to arrive at the no.
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int no, guess, nguesses=1;
    srand(time(0));
    no = rand()%100 + 1; // generate a ran no btw 1 and 100
    //keep running the loop untill the no. is guessed
    do{
        printf("guess the no btw 1 to 100\n");
        scanf("%d",&guess);
      if(guess<no){
            printf("higher no please\n");
        }
        else if(guess>no){
            printf("lower no please\n");
        }
        else{
            printf("you guess it in %d attempts\n",nguesses);
        }
        nguesses++;

    }while(guess!=no);
}
