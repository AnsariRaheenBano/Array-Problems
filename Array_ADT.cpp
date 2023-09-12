#include <iostream>
#include <stdlib.h>
struct myArray
{
  int total_size;
  int used_size; 
  int* ptr;
};
void createArray(struct myArray* a,int tsize,int usize)
{
  a->total_size=tsize;
  a->used_size=usize;
  a->ptr=(int *) malloc(tsize*sizeof(int));
}

void printArray(struct myArray *a)
{
 
  for(int i=0;i<a->used_size;i++)
    {
     std::cout<<(a->ptr)[i]<<std::endl;
    }
    
}

void insertinarray(struct myArray *a)
{
  for(int i=0;i<a->used_size;i++)
    {
     std::cin>>(a->ptr)[i];
    
    }
}

     
    
    

int main() {

  struct myArray marks;
  createArray(&marks,20,5);
  insertinarray(&marks);
  printArray(&marks);

  return 0;
  
}







