#include<iostream>
#include<math.h>
int main() {
	int rub;
	scanf_s("%d",&rub);
	for (int tumgamearaidee = 1; tumgamearaidee <= 12; tumgamearaidee++) {
		printf("%d x %d = %d \n",rub,tumgamearaidee,rub*tumgamearaidee);
	}
}