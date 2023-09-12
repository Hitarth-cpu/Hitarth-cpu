#include <stdio.h>
#include <conio.h>

void main(){
     int totalSticks = 21;
     int userPick, compPick;

     printf("Welcome to the Matchstick game!\n");

     while(1){
          printf("Enter the number of matchstick to pick (1-4)\n");
          scanf("%d", &userPick);

         if(userPick < 1 || userPick > 4){
          printf("Invalid input. Please pick again.\n");
          continue;
         }

         totalSticks -= userPick;

         if (totalSticks <=0){
          printf("You picked the last matchstick. You lose\n");
          break;
         }
       printf("The remaining matchsticks: %d\n", totalSticks);  
       
       
       compPick = 5 - userPick;
       printf("Computer picks up %d matchsticks\n", compPick);
       totalSticks -= compPick;

        if(totalSticks <= 0){
          printf("computer picked last matchstick. you won.");
          break;
        }
        printf("remaining matchsticks %d\n", totalSticks);
     }
     getch(); 
  }
