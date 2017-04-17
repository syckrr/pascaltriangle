#include<stdio.h>
#include<iostream> //5 4 10
int comb(int n,int k){ //5 4 = 5 1 6 4 = 6 2
	if(n/2<k){
		k=n-k;
	}
	unsigned long long a=n,c=k,d=k,e=n;
	for(k;k>1;k--){      
		a=a*(n-1);
		n--;
	}                   
	
	for(d;d>1;d--){
		c=c*(d-1);
	}
	
	
	return a/c;
}
int main() {
	int kolon;
	scanf("%d",&kolon);
	if(kolon>=37){
		printf("%d Faktoriyel degeri hesaplanirken hata olustu,36! Dan fazla deger hesaplanamaz!\n",kolon);
	}
	else{
	
	for(int i=0;i<kolon;i++){ 
		for(int c=0;c<kolon-1-i;c++){ //kolonsayisi-1 = boþluksayi  - boþluksayi-i ön boþluk
			printf(" ");	
		}
		for(int a=0;a<=i;a++){
			if(i==0) {
				printf("1 ");
				continue;
			}
			if(a==0){
				printf("1 ");
				continue;	
			}
			if(i==a){
				printf("1 ");
				continue;
			}
			printf("%d ",comb(i,a));  
		}
		printf("\n");
	}
	}
	system("PAUSE"); //wi.
	return 0;
}
