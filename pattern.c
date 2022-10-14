#include <stdio.h>

void  main(){
  int n,row,col,space;

  printf("row=");
  scanf("%d",&n);
space="4";
  for(row=1;row<=n;row++,space--)
  {
      for(col=1;col<=n;col++)
      {
          printf("%d",row);
      }
      printf("\n\n");
  }

}
