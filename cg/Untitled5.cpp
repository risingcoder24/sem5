#include<stdio.h>
int i,j,k,ke,n,uj[50];
float u,X,Y, nik[50][50],x[50],y[50],xp[100],yp[100];
void calcj(j,ke,n)
{
    for(j=0;j<=n+ke;j++)
    {
        if (j<ke)

            uj[j]=0;

        else if (ke<=j && j<=n)

            uj[j]=j-ke+1;

        else

            uj[j]=n-ke+2;
    }
}
float calcNik(i,k,n,u,uj[])
{
    for (k=1;k<=ke;k++)
    {
        if (k=1)
        {
            for(i=0;i<=n+k;i++)
            for(j=0;j<=n+k;j++)
            {
                if (uj[j]<= u && u<= uj[j+1])

                    nik[i][k]=1;

                else

                    nik[i][k]=0;
            }
        }
        else

        {
            for(i=0;i<=n+k;i++)
            for(j=0;j<=n+k;j++)

            {
                return ((u-uj[j]-u)*calcNik(i,k-1,n,u,uj[j])/(uj[i+k-1]-uj[i])  +  (uj[i+k]-u)*calcNik(i+1,k-1,n,u,uj[j])/(uj[i+k]-uj[i+1]));
            }
        }
    }


}

float curvpoint(u,x[],y[],xp[],yp[],X,Y)
{
    for (i=0;i<=n;i++)
        {
            X=xp[i]+xp[i+1];
            xp[i]=x[i]*nik[i][ke];

            Y=yp[i]+yp[i+1];
            yp[i]=y[i]*nik[i][ke];
        }

int main()

{
 int i,j,k,ke;
 printf("Enetr the values of n and k:\n");
 scanf("%d %d", &n, &ke);
 printf("Range of j: 0<=j<= %d, \n i.e. There are %d knot Vectors \n Knot Vector are:\n ",n+ke,n+ke+1);

 for (j=0;j<=n+ke;j++)
 {
  calcuj(j,ke,n);
  printf("U%d = %d\n ",j ,uj[j]);
 }
 for (j=0;j<=n+ke;j++)
{
  calcNik(i,k,n,u);
  printf("N%d1=%f\n",i,nik[i][k]);
}


}




