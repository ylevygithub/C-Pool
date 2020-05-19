/*
new and delete implementations
The purpose of this exercise is to implement a draft of the new() and delete() functions.
These will build and destroy Player objects.
We want to be able to write code such as the following:
# include " new . h "
# include " player . h "
int main ( void )
{
Object * player = new ( Player ) ;
delete ( player ) ;
return (0) ;
}
This first draft of new() simply has to allocate memory according to the class passed as parameter, and then
call the class’ constructor if there is one, ignoring variadic arguments .... Similarly, delete() must call the
destructor if there is one, and then free the memory.
For the first draft of the new function, forward a NULL va_list pointer to the constructor
*/
#include "new.h"
#include "player.h"

Object  *new(const Class *class, ...)
{
    va_list* ap;
    class = malloc(sizeof(class->__size__));
    if (class == NULL)
        raise("Out of memory");
    Player->__ctor__(class, NULL);
    return (Player);
}

void    delete(Object *ptr)
{
    Player->__dtor__(ptr);
    free(ptr);
}

Object  *va_new(const Class *class, va_list* ap)
{
    return (NULL);
}
