#include "stdlib.h"


int main(int argc, char const *argv[]) {
  int input = 0;
  printf("input your input:  ");
  scanf("%d", &input);

  int i=0;
  int binary[100];
  while(input>0){
    binary[i] = input %2;
    input = input/2;
    i++;
  }

int counter = 0;
for(int j=0;j<i;j++){
  if(binary[j] == 1){
    counter++;
  }
}
printf("%d\n",counter );
  return 0;
}
