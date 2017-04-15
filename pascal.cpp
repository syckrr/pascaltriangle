#include<stdio.h>
#include<iostream>
int comb(int n,int k){ //uyuml. sornlari icin alttakileri kontrol et (unsg lnglng)
	unsigned long long nf=1;
	unsigned long long kf=1;
	unsigned long long fark=1;
	for(int i=2;i<=n;i++){
		nf=nf*i;
	}
	for(int i=2;i<=k;i++){
		kf=kf*i;
	}
	for(int i=2;i<=(n-k);i++){
		fark=fark*i;
	}
	return nf/(kf*fark);
}
int main() {
	int kolon;
	scanf("%d",&kolon);
	if(kolon>=21){
		printf("%d Faktoriyel degeri hesaplanirken hata olustu,21! Den fazla deger hesaplanamaz!\n",kolon);
	}
	else{
	
	for(int i=0;i<kolon;i++){ 
		for(int c=0;c<kolon-1-i;c++){ //kolonsayisi-1 = boþluksayi  - boþluksayi-i ön boþluk
			printf(" ");	
		}
		for(int a=0;a<=i;a++){
			printf("%d ",comb(i,a));  
		}
		printf("\n");
	}
	}
	system("PAUSE"); //wi.
	return 0;
}
