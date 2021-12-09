struct start
{
    char lable[8];
    char instruct[8];
    int operand;
};
struct pro
{
    char lable[8];
    char instruct[8];
    char operand[8];
};
#include<stdio.h>
int main()
{
  struct start start[1];
  struct pro a[3];
  int n=3,i,loc=0000;
  for(i=0;i<1;i++)
  {
    scanf("%s",&start[i].lable);
    scanf("%s",&start[i].operand);
    scanf("%d",&start[i].operand);

  }
  for(i=0;i<n;i++)
        {
        scanf("%s\t",&a[i].lable);
        scanf("%s\t",&a[i].instruct);
        scanf("%s",&a[i].operand);
        }
        printf("lable\tloc\n");
    for(i=0;i<1;i++)
  {
    printf("%s\t",&start[i].lable);
    printf("%d\n",loc);
  }
       for(i=0;i<n;i++)
        { 
           printf("%s\t",&a[i].lable);
        loc=loc+3;
        printf("%d\t",&loc);
        }
        return 0;
}
