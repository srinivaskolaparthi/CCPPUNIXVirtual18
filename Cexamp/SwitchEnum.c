#include <stdio.h>

enum colors {RED=190, GREEN=900, YELLOW, BLUE};

int main () 
{
	int input = 1;
		switch (input) {
		
		case RED:
			printf("RED selected\n");
			break;
		case GREEN: /* fall through */	
			printf("GREEN selected\n");
			break;
		case YELLOW:
			printf("YELLOW selected\n");
			break;
		case BLUE:
			printf("BLUE selected\n");
			break;
		default:
			printf("Invalid input %d, range( %d to %d)\n", 
				input, RED, BLUE);
		}

	return 0;
}
