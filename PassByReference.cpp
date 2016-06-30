#include <stdio.h>
#include <stdlib.h>

int go_south_east(int *ptr_lat, int *ptr_lon)
{

	*ptr_lat = *ptr_lat - 1;
	*ptr_lon = *ptr_lon + 1;
}

int main()
{
	int latitude = 32;
	int longitude = -64;
	go_south_east(&latitude, &longitude);
	printf("Avast! Now at: [%i, %i]\n", latitude, longitude);
	return 0;
}
