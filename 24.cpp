#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int sayi;
	
	printf("Lutfen cift mi tek mi oldugunu ogrenmek istediginiz sayiyi giriniz...\n");
	scanf("%d",&sayi);
	
	if( sayi % 2 ==0 ){
		
		printf("Girmis oldugunuz sayi ciftir...");
	}
	
	else{
		
		printf("Girmis oldugunuz sayi tektir...");
	}
	
	return 0;
}
