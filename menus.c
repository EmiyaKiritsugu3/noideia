#include <stdio.h>
#include <stdlib.h>

int main_menu(){
  system("cls||clear");
  int nchoose;
  printf(
    "Generic Project to Prove C Language Programing Skill\nDeveloped by @inamarjunior - June, 2021"
    "\n\nChoose a option entering the corresponding number:\n");
  do{  
    printf("\n1 - Cadastrar Livro\n2 - Visualizar Biblioteca\n3 - Quit\n");
    scanf("%d", &nchoose);
    system("cls||clear");
    
    if((nchoose < 1) || (nchoose > 3)){
      printf("Please, enter a valid option!\n");
    }
  }while((nchoose < 1) || (nchoose > 3));
  return nchoose;
}

void sub_menu01(){
  system("cls||clear");
  int option = 0;
  printf("Choose a option entering the corresponding number:\n");
  do{
    printf("\n1 - ???\n2 - Return\n");
    scanf("%d", &option);
    system("cls||clear");
    switch(option){
      case 1:
        printf("Still in development, come back later!\n");
        break;
      case 2:
        break;
      default:
        printf("Please, enter a valid option!\n");    
    }
  }while(option != 2);
}
void sub_menu02(){
  system("cls||clear");
  int option = 0;
  printf("Choose a option entering the corresponding number:\n");
  do{
    printf("\n1 - ???\n2 - Return\n");
    scanf("%d", &option);
    system("cls||clear");
    switch(option){
      case 1:
        printf("Still in development, come back later!\n");
        break;
      case 2:
        break;
      default:
      printf("Please, enter a valid option!\n");   
    }
  }while(option != 2);
}