#include <iostream>

int main() {
	
	int n = 8;
	int array[] = {1,2,3,5,4,3,2,1};
	
	for(int i = 0; i<n; ++i) {
		for(int j=i-1; j>=0; j--) {
			if (array[j] > array[j+1]) {
				int buffer = array[j];
				array[j] = array[j+1];
				array[j+1] = buffer;
			}
		}
	}
	
	for(int i=0; i<n; i++) {
		printf("%d\n", array[i]);
	}
	
	int m = 500000;
	long int m_square = m*m; // pourquoi est ce que ça ne marche pas en effet, le resultat va dans un long int. Cependant si je met un long int pour m ça marche... cela me semble bizarre
	
	printf("%ld\n", m_square);
	
	return 0;
}
