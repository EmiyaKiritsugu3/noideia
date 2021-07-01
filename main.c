#include <stdio.h>
#include <stdlib.h>
#include "menus.h"

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
}

