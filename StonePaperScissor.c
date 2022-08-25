#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int StonePaperScissor(char you, char comp){

    if(you == comp){
        return 0;
    }

    if(you=='s' && comp=='p'){
        return -1;
    }

    else if(you == 's' && comp == 'k'){
        return 1;
    }
    if(you == 'p' && comp == 'k'){
        return -1;
    }
    else if( you == 'p' && comp == 's'){
        return 1;
    }
    if(you == 'k' && comp == 's'){
        return -1;
    }
    else if(you == 'k' && comp == 'p'){
        return 1;
    }
}

int main(){
    char you , comp;
    srand(time(0));
    int number = rand()%100 + 1;
    if(number<33){
        comp = 's';
    }
    else if(number>33 && number<66){
        comp = 'p';
    }
    else{
        comp = 'k';
    }
     printf("Enter s for Stone, p for Paper or k for Scissor\n");
     scanf("%c", &you);
     int result = StonePaperScissor(you, comp);
     printf("you choose %c and comp choose %c\n" , you , comp);
     if(result == 0 ){
         printf("Draw \n");
     }
     else if(result == 1 ){
         printf("You Won\n");
     }
     else{
         printf("Comp Won\n");
     }

     

}