union
#include <stdio.h>
#include <string.h>
union un 
{
    short i;
    float f;
    char str[20];
};

int main() {
    union un uv;

    uv.i = 40;
    printf("\nData of i: %hd", uv.i);

    uv.f = 220.5;
    printf("\nData of f: %f", uv.f); // Overwrites Data of i

	strcpy(uv.str, "BCA");
	printf("\nData of s: %s\n", uv.str); // Overwrites Data of f
	
	printf("\nAfter assign last variable Data of s");
	printf("\nData of i: %hd", uv.i);
	printf("\nData of f: %f", uv.f);
	printf("\nData of s: %s\n", uv.str);
    return 0;
}

/* --OUTPUT--
Data of i: 40
Data of f: 220.500000
Data of s: BCA

After assigning data to the last variable s
Data of i: 17218 		//Garbage
Data of f: 0.000000		//Garbage
Data of s: BCA
*/