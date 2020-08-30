#include<iostream>
#include<math.h>
int main() {
	int hansam,hong;
	scanf_s("%d",&hong);
	hansam = hong % 3 ;
	if  (hansam == 0 )	
		printf("it can be divided by 3");
	else 
		printf("it can't be divided by 3");
}