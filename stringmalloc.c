#include <stdio.h>
#include <stdlib.h>
typedef char * string;

int main(){
  string pointer[3];

  for (int i = 0; i  < 3; i++){
    string str = (string)malloc(10);
    scanf("%s", str);
    pointer[i] = str;
  }
  printf("%s %s %s\n", pointer[0], pointer[1], pointer[2]);
  free(pointer[0]);
  free(pointer[1]);
  free(pointer[2]);
}
