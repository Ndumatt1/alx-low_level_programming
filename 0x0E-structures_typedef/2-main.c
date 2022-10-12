#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
int main(void)
{
		struct dog my_dog;

			my_dog.name = "Ghost";
				my_dog.age = 4.75;
					my_dog.owner = "Jon Snow";
						print_dog(&my_dog);
							return (0);
}
