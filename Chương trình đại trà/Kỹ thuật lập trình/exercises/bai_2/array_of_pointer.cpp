#include <stdio.h>
#include <iostream>
#include <string.h>


#define MAXHS 5
#define MAXLEN 30
  
int main(){
  int i, j, count = 0; 
  char ds[MAXHS][MAXLEN];
  char *ptr[MAXHS], *tmp;
  while (count < MAXHS) {
    printf("Vao hoc sinh thu : %d\n", count+1);
    fgets(ds[count], sizeof(ds[count]), stdin);
    if (strlen(ds[count]) == 0) break;
    // assign the address of ds to ptr[count]
    //ptr[count] = ds[count];
    ptr[count] = ds +count;
    std::cout << &ds[count] <<std::endl;
    //std::cout << ds+count <<std::endl;
    ++count;
  }
  // do the worse sorting algorithm in all algorithms
  for (i=0; i<count-1; i++)
    for (j = i+1; j<count; j++)
      if (strcmp(ptr[i], ptr[j]) > 0){
        tmp=ptr[i]; ptr[i] = ptr[j]; ptr[j]=tmp;
      }
  for (i=0; i<count; i++)
    printf("\n %d: %s", i+1, ptr[i]);
}
