#include <stdio.h>

int main() {
  int a[5];
  int n;


  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);

  for (int i=1; i<n+1; i++) {
 	
	if(i%a[0]==0)   //se a iteracao atual i for divisivel por a[0]
	printf("0");	
	if(i%(a[1])==0)  //se a ...                              a[1]   
	printf("1");
	if(i%(a[2])==0)    //se a ...                              a[2], e por ai vai
	printf("2");
	if(i%(a[3])==0)
	printf("3");
	if(i%(a[4])==0)
	printf("4");
  	
	if((i%(a[0])!=0)&&(i%(a[1])!=0)&&(i%(a[2])!=0)&&(i%(a[3])!=0)&&(i%(a[4])!=0))  
        //caso nao haja nenhum contador de periodicidade divisivel
	
        printf("-");
        printf("\n");
        
	//if(i==n)
	//printf("\n");
	
      

  }

  

  return 0;
}
