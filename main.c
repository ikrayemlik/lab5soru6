#include <stdio.h>
#include <stdlib.h>

/* ��aret�ileri kullanarak bir dizideki t�m elemanlar�n toplam�n� hesaplayan C dilinde bir program yaz�n */

int main() {
int dizi[10];
int eleman,boyut;
int i,toplam=0,*ptr;
printf("dizinin boyutunu giriniz");	
	scanf("%d",&boyut);

	printf("dizinin elemanlar�n� giriniz");
	for(i=1;i<boyut;i++)
{
	dizi[i]=eleman;
	scanf("%d\n",&eleman);
	
}	
for(ptr=dizi;*ptr;ptr++)	
	{
	toplam =toplam + * ptr;	
	}
	
	printf("toplam:%d",toplam);
	
	
	
	
	
	
	
	return 0;
}
