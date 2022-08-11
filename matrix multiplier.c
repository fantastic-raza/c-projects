
#include <stdio.h>
#include<conio.h>


int main()
{
    int a[2][2], b[2][2],c[2][2],i,j,k;
    
   //taking input for matix 1st 
    for( i=0; i<2; i++)
    {
    	
        for( j=0; j<2; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("the entered matrix is \n");
    for( i=0; i<2; i++)
    {
        for( j=0; j<2; j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    
    
    
    //taking input for matrix 2nd 
    for( i=0; i<2; i++)
    {
    	
        for( j=0; j<2; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("the entered matrix is \n");
    for( i=0; i<2; i++)
    {
        for( j=0; j<2; j++)
        {
            printf("%d",b[i][j]);
        }
        printf("\n");
    }

    
    
    //multypling the matrixes
    for( i=0; i<2; i++)
    {
    	
        for( j=0; j<2; j++)
        { c[i][j]=0;
            for(k=0; k<2; k++)
            {
            	c[i][j]=a[i][k]*b[j][k]+c[i][j];
			}
        }
    }


//printing the resultant maTRIX
printf("the resultant matrix is");
    
	printf("\n");
	
	for( i=0; i<2; i++)
    {
        for( j=0; j<2; j++)
        {
            printf("%d",c[i][j]);
        }
        printf("\n");
    }



     
    
    return 0;
}
