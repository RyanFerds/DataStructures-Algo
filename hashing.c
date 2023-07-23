#include <stdio.h>
#define size 10
int arr[size];
void init()
{
  int i;
  for(i=0;i<size;i++)
    arr[i]=-1;
}
void insert(int val)
{
  int key;
  key = val % size;

  if(arr[key]== -1)
  arr[key] = val;
  else
    {while(arr[key] != -1)
    key = (key + 1) % size;
  arr[key] = val;

  }
}
  void printhash()
  {int i;
    for(i = 0;i < size;i++)
    printf(" %d ",arr[i]);
  }
  int main()
  {init();

    insert(10);
    insert(10);
    insert(10);
    insert(10);
    insert(10);
    insert(10);
    insert(10);

    insert(9);
   printhash();
   return 0;
  }


