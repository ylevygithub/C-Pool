/*
** EPITECH PROJECT, 2020
** rush1
** File description:
** raise.h
*/

/*JUSTE LA RAISE MACRO*/
/*
The raise.h file contains the raise() macro, which you MUST use to handle any error cases (for instance, if
malloc returns a null pointer). It takes as a single parameter a string indicating the error type.
For instance:
if (( ptr = malloc ( sizeof (* ptr ) ) ) == NULL )
raise (" Out of memory ") ;
*/
#ifndef RAISE_H
# define RAISE_H

# include <stdio.h>
# include <stdlib.h>

# define raise(msg)                                             \
do {                                                            \
    fprintf(stderr, "%s: %u: %s\n", __FILE__, __LINE__, msg);   \
    abort();                                                    \
} while (0)

#endif

