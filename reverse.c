#include<stdio.h>
int main(){
	int n;
	printf("Enter number of elements:");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	int temp;
	for(int i=0;i<n/2;i++){        
		
		temp=a[i];
		a[i]=a[n-i-1];
		a[n-1-i]=temp;
	}
	printf("\n");
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}