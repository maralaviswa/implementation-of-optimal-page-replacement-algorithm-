#include<stdio.h>
#include<stdlib.h>
#define MAX 3

int main()
{
        static int fault,cnt=-1,l,m,p=0;
        int *ptr=NULL,n,temp,k=0,i=0,j=0,flag=1,val=0;
        int arr[MAX];
        for(int i=1;i<MAX;i++)
        arr[i]=-1;
        printf("enter number of processors\n");
        scanf("%d",&n);
        ptr=calloc(1,(sizeof(int)*n));
        for(i=0;i<n;i++)
        {
          scanf("%d",&ptr[i]);
        }
        printf("the processors are\n");
        for(int i=0;i<n;i++)
        {
                printf("%d ",ptr[i]);
        }
        printf("\n");
        for(j=0;j<n;j++)
        {
                flag=1;
                temp=ptr[j];
                for(i=0;i<MAX;i++)
                {
                 if(arr[i]==temp)
                 {
                    flag=0;
                    break;
                 }
                }
                if(flag==1 && k<MAX)
                {
                  arr[k++]=temp;
                  fault++;
                }
                else if(k==MAX && flag==1)
                {
                        for(i=0;i<MAX;i++)
                        {
                          for(l=j+1;l<n;l++)
                           {
                             if(ptr[l]==arr[i])
                             {
                                     m=1;
                                     break;
                             }
                              else
                              val++;
                            }
                             if(p<val)
                             {
                                     p=val;
                                     cnt=i;
                             }
                             val=0;
                        }
                        if(m==0)
                        arr[cnt]=temp;
                        else
                        arr[cnt]=temp;
                        fault++;
                        p=0;
                }
                printf("the processors running are:\n");
                for(i=0;i<k;i++)
                        printf("%d ",arr[i]);
                printf("\n");
        }
        printf("\n the page faults are %d\n",fault);
}