#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Book{
  char tittle[81];
  char author[81];
  int isbn;
}book;

typedef struct user{
  char name[81];
  char * rn;
}User;



book first;
void mainMenu();
void subMenu01();
void subMenu02();
void registerBook(book* b, int i);
void viewBook();
const char * header();
const char * messageError();

int op;
int nBook;
int n;

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
  
  //int n = 0;
  op = 0;
  
  system("cls||clear");
  
  
  do{  
    
    printf("%s", header());
    puts("\n1 - Register\n2 - View Library\n3 - Delete\n4 - Return");
    scanf("%d", &op);
    system("cls||clear");
    switch(op){
      case 1:
      registerBook(&first, n);
      break;
      case 2:
      //viewBook();
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

void registerBook(book* b, int i){
  
  int answer;

  do{
    system("cls||clear");
    printf("%s", "Book Tittle: ");
    scanf("%s", b[i].tittle);
    printf("%s", "Book Author: ");
    scanf("%s", b[i].author);
    printf("%s", "ISBN: ");
    scanf("%d", &b[i].isbn);
    nBook++;
    printf("%s", "Register another book? 1 for yes, 0 for not: ");
    scanf("%d", &answer);
    getchar();
    system("cls||clear");

  }while(answer != 0);
}  

/*void viewBook(Book* b, int i){
  printf("Tittle: %s", b[i].tittle);
  printf("Author: %s", b[i].author);
  printf("ISBN: %d", b[i].isbn);
}*/