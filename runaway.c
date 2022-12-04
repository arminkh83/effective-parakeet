#include <stdio.h>
void sort (int cr[],int br[],int l,int r);
void take_array(int ar[],int n);
int main ()
{
    int n;
    scanf("%d",&n);
    int ar[n],br[n];
    take_array(ar,n);
    take_array(br,n);
    sort(ar,br,0,n-1);
    int i=0;
    int j=1;
    // int x=[ar]
    // for (int a=0;a<n;a++)
    // printf("%d ",ar[a]);
    // printf("\n");
    // for(int d=0;d<n;d++)
    // printf("%d ",br[d]);
    while (j<n)
    {
        if(br[i]<br[j])
        i=j;
        j++;
    }
    printf("%d %d",ar[i],br[i]);
}
void sort(int cr[],int br[],int l,int r)
{
    int i, j, pivot, t;
   if(l<r){
      pivot=l;
      i=l;
      j=r;
      while(i<j){
         while(cr[i]<=cr[pivot]&&i<r)
         i++;
         while(cr[j]>cr[pivot])
         j--;
         if(i<j){
            t=cr[i];
            cr[i]=cr[j];
            cr[j]=t;
            t=br[i];
            br[i]=br[j];
            br[j]=t;
         }
      }
      t=cr[pivot];
      cr[pivot]=cr[j];
      cr[j]=t;
      t=br[pivot];
      br[pivot]=br[j];
      br[j]=t;
      sort(cr,br,l,j-1);
      sort(cr,br,j+1,r);
}
}
void take_array(int ar[],int n)
{
    for (int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
}