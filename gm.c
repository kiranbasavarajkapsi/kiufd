#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int mb, cb, mo, co, mr=0, cr=0, i, runm[i],j, runc[j],k=1,l=1;
  printf("\nyou are batting\nonly enter 1 to 6 runs\n");

  
  for(i=1;i<13;i++)
  {
    k++;
    printf("\nenter your %d run\n",i);
    scanf("%d",&mb);
  
    if(mb>0&&mb<7)
    {
      srand(time(0));
      co=rand()%6+1;
      printf("%d",co);
      if(mb==co)
      {
        printf("\nout\n");
        mb=0;
        goto table1;
      }
      else
      {
        mr=mr+mb;
      }
     runm[i]=mb;
    }
    else
    {
      mb=0;
    }
  } 
  
  table1:printf("\nthe total run of you is:%d\n",mr);
  
  printf("\nyou are bowling\nonly enter 1 to 6 runs\n");

  for(j=1;j<13;j++)
  {
    l++;
    printf("\nguess its run\n");
    scanf("%d",&mo);
    if(mo>0&&mo<7)
    {
      srand(time(0));
      cb=rand()%6+1;
      printf("%d",cb);
      if(cb==mo)
      {
        printf("\nout\n");
        cb=0;
        goto table2;
      }
      else
      {
        cr=cr+cb;
      }
      runc[j]=cb;
    }
    else
    {
      printf("noboll\n");
      j--;
    }
  }
  
  table2:printf("\nthe total run of computer is:%d\n",cr);

  if(cr>mr)
  {
    printf("\nwinner is computer\n");
  }
  else if(cr==mr)
  {
    printf("\nthe game is draw\n");
  }
  else 
  {
    printf("\nyou are the winner\n");
  }
 /* printf("\n::::table::::\n");
  printf("-----------------------------------\n");
  printf("b  : r of m\n");
  for(i=1;i<k;i++)
  {
    printf("%d  : %d     \n ",i,runm[i]);
  }
  printf("\n\n");
  printf("b  : r of c\n");
  for(j=1;j<l;j++)
  {
    printf("%d  : %d     \n ",j,runm[j]);
  }*/

  return 0;
}