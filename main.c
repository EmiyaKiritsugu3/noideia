#include <stdio.h>
#include <stdlib.h>

int main_menu();
int sub_menu01();
int sub_menu02();

int main(void){
  int option = 0;
  do{
    option = main_menu();
    switch(option){
      case 1:
        sub_menu01();
        break;
      case 2:
        sub_menu02();
        break;
      case 3:
        break;
    }
  }
  while(option != 3);
  system("cls||clear");
}

int main_menu(){
  int nchoose;
  printf("Generic Project to Prove C Language Programing Skill\nDeveloped by @inamarjunior - Junho, 2021");
  do{  
    printf("\nChoose a option entering the corresponding number:\n1 - ???\n2 - ???\n3 - Quit\n");
    scanf("%d", &nchoose);
    system("cls||clear");
    
    if((nchoose < 1) || (nchoose > 3)){
      printf("Please, enter a valid option!");
    }
  }
  while((nchoose < 1) || (nchoose > 3));
  return nchoose;
}

int sub_menu01(){
  int option = 0;
  do{
    printf("Choose a option entering the corresponding number:\n1 - ???\n2 - Return\n");
    scanf("%d", &option);
    system("cls||clear");
    switch(option){
      case 1:
        printf("Still in development, come back later!\n");
        break;
        system("cls");
      case 2:
        break;    
    }
  }
  while(option != 2);
  return option;
}
int sub_menu02(){
  int option = 0;
  do{
    printf("Choose a option entering the corresponding numebr:\n1 - ???\n2 - Return\n");
    scanf("%d", &option);
    system("cls||clear");
    switch(option){
      case 1:
        printf("Still in development, come back later!\n");
        break;
      case 2:
        break;    
    }
  }
  while(option != 2);
  return option;
}