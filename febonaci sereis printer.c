//febonaci sereis
#include <stdio.h>
//fuction to make febonaci sereis
 recursion(int a ){
	if (a==0){
		return 0;
	}
		if (a==1){
		return 1;
	}
	else{		
		return (recursion (a-1 )+recursion (a-2) );
		}
}

//main function
int main()
{int x,y;

   	printf("enter the no. you want febonaci of ");
   	scanf("%d",&y);
   	
   	for(x=0; x<y; x++){
   	printf("%d\n",recursion (x));
   }
}
