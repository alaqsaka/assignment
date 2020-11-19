#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define sizex 1000
int count_digits(char s[]);
int main()
{
	char X[sizex];
	printf("Input string (maksimal 1000 karakter): "); fgets(X, sizeof X, stdin);
	printf("Jumlah digit dalam teks = %i", count_digits(X));
	
	return 0;
}

int count_digits(char s[])
{
	int i, count;
	count = 0;
	while(s[i] != '\0'){
		if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z' || s[i] >= '0' && s[i] <= '9'){
			count ++;
		}
		i++;
	}
	
	return count;
}
