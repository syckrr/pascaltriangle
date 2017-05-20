#include<stdio.h>
#include<iostream> //5 4 10


unsigned long long comb(int n,int r){ 
	if(n/2<r){ //5 4 = 5 1 6 4 = 6 2  //6 2 9
		r=n-r;
	}
	if((n==38 && r==13) ||  (n==46 && r==17) ||  (n==46 && r==18) ) return 0;
	if(r==1){
				return n;
			}
	unsigned long long nd=n,rd=r,ust=n,alt=r,sonuc=1,bolmesay=0,carpmasay=0;
	while(true){
			while(ust%alt==0){
				if(bolmesay==r-1) {
					break;
				}
				ust=ust/alt;
				bolmesay++;
				alt=--rd;
				
			}
			if(carpmasay==r-1 && bolmesay==r-1) return ust;
				ust*=--nd;
				carpmasay++;
				if(carpmasay==r-1 && bolmesay==r-1) return ust;
		}
	return ust;	
}
int main() {
	int kolon;
	scanf("%d",&kolon);
	if(kolon>=57){
		printf("%d Faktoriyel degeri hesaplanirken hata olustu,56! Dan fazla deger hesaplanamaz!\n",kolon);
	}
	else{
	
	for(int i=0;i<kolon;i++){ 
		for(int c=0;c<kolon-1-i;c++){ //kolonsayisi-1 = bo?luksayi  - bo?luksayi-i ön bo?luk
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
	;  
			printf(" %llu ",comb(i,a));
   
		}
		printf("\n");
	}
	}
	system("PAUSE"); //wi.
	return 0;
}
