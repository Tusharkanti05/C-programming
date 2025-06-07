#include <stdio.h>
float marks(float, float, float, float*,float*);

int main(){
	float mrk1, mrk2, mrk3, avg, parsent;

	printf("Enter marks of 1st subject : ");
	scanf("%f", &mrk1);

	printf("Enter marks of 2nd subject : ");
	scanf("%f", &mrk2);

	printf("Enter marks of 3rd subject : ");
	scanf("%f", &mrk3);

	marks(mrk1, mrk2, mrk3, &avg, &parsent);

	printf("Average is %.2f\nParsentage is %.2f\n", avg, parsent);

	return 0;
}

float marks(float mrk1, float mrk2, float mrk3, float *avg,float *parsent){
	*avg = (mrk1 + mrk2 + mrk3) / 3.0;
	*parsent = ((mrk1 + mrk2+ mrk3) / 300.00) * 100;
}