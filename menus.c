#include <stdio.h>
#include <stdlib.h>

void mainMenu();
void subMenu01();
void subMenu02();
const char * header();
const char * messageError();

int op;

void mainMenu(){
  
  op = 0;
  system("cls||clear");
  printf("%s", header());
  
  do{
    puts("\n1 - Books\n2 - People\n3 - Sair");
    scanf("%d", &op);
    
    switch(op){
      case 1:
        subMenu01();
        break;
      case 2:
        subMenu02();
        break;
      case 3:
        system("cls||clear");
        break;
      default:
        system("cls||clear");
        printf("%s", messageError());
    }
  }while(op != 3);
}

void subMenu01(){
  
  op = 0;
  system("cls||clear");
  printf("%s", header());
  
  do{  
    puts("\n1 - Register\n2 - Delete\n3 - View Library\n4 - Return");
    scanf("%d", &op);
    system("cls||clear");
    switch(op){
      case 1:
      printf("oo");
      break;
      case 2:
      printf("kk");
      break;
      case 3:
      printf("Null");
      case 4:
      mainMenu();
      break;
      default:
      printf("%s", messageError());
    }
  }while(op != 3);
}

void subMenu02(){
  
  op = 0;
  system("cls||clear");
  printf("%s", header());
  
  do{
    puts("\n1 - Books\n2 - neh\n3 - Return");
    scanf("%d", &op);
    system("cls||clear");
    switch(op){
      case 1:
      printf("oo");
      break;
      case 2:
      printf("kk");
      break;
      case 3:
      mainMenu();
      break;
      default:
      printf("%s", messageError());
    }
  }while(op != 3);
}

const char * header(){
  return 
    "Generic Project to Prove C Language Programing Skill\nDeveloped by @inamarjunior - June, 2021"
    "\n\nChoose a option entering the corresponding number:\n\a"; // "\a" == makes a sound 
}

const char * messageError(){
  return 
  "Generic Project to Prove C Language Programing Skill\nDeveloped by @inamarjunior - June, 2021"
  "\n\nPlease, enter a valid option!\n";
}