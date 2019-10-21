#include <stdio.h>
#include <string.h>
#include "dbg.h"

int normal_copy(char *from, char *to, int count)
{
	int i = 0;
	
	for (i = 0; i < count; i++){
		to[i] = from[i];
	}
	
	return i;
}

int duff_device(char *from, char *to, int count)
{
	{
		int n = (count + 7) / 8;
		
		switch (count % 8) {
			case 0:
				do {
					*to++ = *from++;
					case 7:
					*to++ = *from++;
					case 6:
					*to++ = *from++;
					case 5:
					*to++ = *from++;
					case 4:
					*to++ = *from++;
					case 3:
					*to++ = *from++;
					case 2:
					*to++ = *from++;
					case 1:
					*to++ = *from++;		
				} while(--n > 0);
		}
	}
	
	return count;
}


int valid_copy(char *data, int count, char expects)
{
	int i = 0;
	
	for(i = 0; i < count; ++i)
	{
		if(data[i] != expects){
			log_err("[%d] %c != %c", i, data[i], expects);
			return 0;
		}
	}
	
	return 1;
}


int main (int argc, char const *argv[])
{
	char from[1000] = { 'a' };
	char to[1000] = { 'b' };
	int rc = 0;
	
	// set up the from to have some stuff
	memset(from, 'x', 1000);
	// set it to a failure mode
	memset(to, 'y', 1000);
	check(valid_copy(to, 1000, 'y'), "Not initilized right.");
	
	// use normal copy to
	rc = normal_copy(from, to, 1000);
	check(rc == 1000, "Normal copy failed: %d", rc);
	check(valid_copy(to, 1000, 'x'), "Normal copy failed.");
	
	// reset 
	memset(to, 'y', 1000);
	
	// duf version
	rc = duff_device(from, to, 1000);
	check(rc == 1000, "duff_device failed: %d", rc);
	check(valid_copy(to, 1000, 'x'), "duff_device failed.");
	
	
error:
	return 1;
	
	return 0;
}