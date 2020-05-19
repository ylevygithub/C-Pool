/*
** EPITECH PROJECT, 2018
** cpp_rush1
** File description:
** Exercice 02
*/

#include <stdio.h>
#include "point.h"

typedef struct
{
    Class   base;
    int     x, y;
}   PointClass;

static void Point_ctor(PointClass *this, va_list *args)
{
    this->x = va_arg(*args, int);
    this->y = va_arg(*args, int);
}

static void Point_dtor(PointClass *this)
{
    free(this);
}

static char *Point_str(PointClass *this)
{
    char str[100] = {0};
    char *result;
    int index = 0;

    snprintf(str, 100, "<%s (%d, %d)>", this->base.__name__, this->x, this->y);
    result = malloc(strlen(str) + 1);
    while (str[index]) {
        result[index] = str[index];
        index++;
    }
    result[index] = '\0';
    return (result);
}

static Object *Point_add(PointClass *this, PointClass *other)
{
    PointClass *result = new(Point);
    result->x = this->x + other->x;
    result->y = this->y + other->y;
    return (result);
}

static Object *Point_sub(PointClass *this, PointClass *other)
{
    Point->__sub__(this, other);
    return (Point);
}

static Object *Point_mul(PointClass *this, PointClass *other)
{
    Point->__mul__(this, other);
    return (Point);
}

static Object *Point_div(PointClass *this, PointClass *other)
{
    Point->__div__(this, other);
    return (Point);
}

static bool *Point_eq(PointClass *this, PointClass *other)
{
    if (Point->__eq__(this, other))
        return (true);
    else
        return (false);
}

static bool *Point_gt(PointClass *this, PointClass *other)
{
    if (Point->__gt__(this, other))
        return (true);
    else
        return (false);
}

static bool *Point_lt(PointClass *this, PointClass *other)
{
    if (Point->__lt__(this, other))
        return (true);
    else
        return (false);
}
// Create additional functions here

static const PointClass _description = {
    {   /* Class struct */
        .__size__ = sizeof(PointClass),
        .__name__ = "Point",
        .__ctor__ = (ctor_t)&Point_ctor,
        .__dtor__ = (dtor_t)&Point_dtor,
        .__str__ = (to_string_t)&Point_str,    /* Implement this method for exercice 02 */
        .__add__ = (binary_operator_t)&Point_add,    /* Implement this method for exercice 03 */
        .__sub__ = (binary_operator_t)&Point_sub,    /* Implement this method for exercice 03 */
        .__mul__ = (binary_operator_t)&Point_mul,
        .__div__ = (binary_operator_t)&Point_div,
        .__eq__ = (binary_comparator_t)&Point_eq,
        .__gt__ = (binary_comparator_t)&Point_gt,
        .__lt__ = (binary_comparator_t)&Point_lt
    },
    .x = 0,
    .y = 0
};

const Class   *Point = (const Class *)&_description;
