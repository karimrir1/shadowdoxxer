#include <stdio.h>
#include <stdlib.h>
#include "help.c"
#include <string.h>

int main (int argc, char *argv[]) {
	switch (argc) {
		case 1:
		  print_help();
		  break;
	       case 2:
		  if ( strcmp( argv[1], "-h" ) == 0 ) {
		       printf("-h has been used\n");
		       print_help();
		  }
		  else if ( strcmp( argv[1], "-r" ) == 0 ) {
			printf("no run function yet, lol\n");
		  }
		  else {
		   printf("error: unknown argument\n");
		   print_help();
		  }
		  break;
				  
	}
}
