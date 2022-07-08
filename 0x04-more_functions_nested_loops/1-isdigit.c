#include "main.h"
#include <stdio.h>

int main()
{
	    char c;
	        c= '0';
		    printf("Result when numeric character is passed: %d", _isdigit(c));

		        c='+';
			    printf("\nResult when non-numeric character is passed: %d", isdigit(c));

			        return 0;
}
