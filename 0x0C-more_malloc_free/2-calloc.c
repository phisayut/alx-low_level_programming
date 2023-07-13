#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocate memory and set all values to 0
 * @nmemb: size
 * @size: sizeof(datatype)
 * Return: pointer to calloc'd string
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pntr;
	unsigned int i; /* match unsigned arguments */

	if (nmemb <= 0 || size <= 0) /* validate input */
		return (NULL);

	/* allocate memory and check if error */
	pntr = malloc(nmemb * size);
	if (pntr == NULL)
		return (NULL);

	/* set allocated memory values to 0 */
	for (i = 0; i < nmemb * size; i++)
		*((char *)pntr + i) = 0; /* type cast assigning values*/

	return (pntr);
}
