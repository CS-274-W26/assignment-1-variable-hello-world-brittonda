#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	srand(time(NULL));
	int myrand = rand()%11;

	if (myrand <= 4) {
		printf("Eat more beef, kick less cats\n");
	} else if (myrand <= 9) {
		printf("FRODO LIVES\n");
	} else {
		printf("Larn is the best roguelike\n");
	}
	printf("Your number is: %d\n", myrand);
	return 0;
}
