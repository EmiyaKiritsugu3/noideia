#include <stdio.h>
#include <stdlib.h>

typedef struct book Book;
struct book{
  char tittle[81];
  char author[81];
  int isbn;
};

typedef struct user{
  char name[81];
  char * rn;
}User;




void mainMenu();
void subMenu01();
void subMenu02();
void registerBook(Book* b, int i);
void viewBook(Book* b, int i);
const char * header();
const char * messageError();

int op;
int nBook;

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
  
  int n = 0;
  op = 0;
  Book first;
  system("cls||clear");
  printf("%s", header());
  
  do{  
    puts("\n1 - Register\n2 - Delete\n3 - View Library\n4 - Return");
    scanf("%d", &op);
    system("cls||clear");
    switch(op){
      case 1:
      registerBook(&first, n);
      break;
      case 2:
      viewBook(&first, n);
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

void registerBook(Book* b, int i){
  
  int answer;
  nBook = 0;

  do{
    system("cls||clear");
    printf("%s", "Book Tittle: ");
    scanf("%s", b[i].tittle);
    printf("%s", "Book Author: ");
    scanf("%s", b[i].author);
    printf("%s", "ISBN: ");
    scanf("%d", &b[i].isbn);
    nBook++;
    printf("%s", "Register another book? ");
    scanf("%d", &answer);

  }while(answer != 0);
}  

void viewBook(Book* b, int i){
  
  
  printf("Tittle: %s", b[i].tittle);
  printf("Author: %s", b[i].author);
  printf("ISBN: %d", b[i].isbn);
  for(int i = 0; i <= nBook; i++) {
  }
}