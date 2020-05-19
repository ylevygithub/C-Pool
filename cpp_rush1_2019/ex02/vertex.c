#include "vertex.h"

typedef struct
{
    Class   base;
    int     x, y, z;
}   VertexClass;

static void Vertex_ctor(VertexClass *this, va_list *args)
{
    this->x = va_arg(*args, int);
    this->y = va_arg(*args, int);
}

static void Vertex_dtor(VertexClass *this)
{
    free(this);
    free(this);
}

static char *Vertex_str(VertexClass *this)
{
    Vertex->__str__(this);
    return (Vertex);
}

static Object *Vertex_add(VertexClass *this, VertexClass *other)
{
    Vertex->__add__(this, other);
    return (Vertex);
}

static Object *Vertex_sub(VertexClass *this, VertexClass *other)
{
    Vertex->__sub__(this, other);
    return (Vertex);
}

static Object *Vertex_mul(VertexClass *this, VertexClass *other)
{
    Vertex->__mul__(this, other);
    return (Vertex);
}

static Object *Vertex_div(VertexClass *this, VertexClass *other)
{
    Vertex->__div__(this, other);
    return (Vertex);
}

static bool *Vertex_eq(VertexClass *this, VertexClass *other)
{
    if (Vertex->__eq__(this, other))
        return (true);
    else
        return (false);
}

static bool *Vertex_gt(VertexClass *this, VertexClass *other)
{
    if (Vertex->__gt__(this, other))
        return (true);
    else
        return (false);
}

static bool *Vertex_lt(VertexClass *this, VertexClass *other)
{
    if (Vertex->__lt__(this, other))
        return (true);
    else
        return (false);
}
// Create additional functions here

static const VertexClass _description = {
    {   /* Class struct */
        .__size__ = sizeof(VertexClass),
        .__name__ = "Vertex",
        .__ctor__ = (ctor_t)&Vertex_ctor,
        .__dtor__ = (dtor_t)&Vertex_dtor,
        .__str__ = (to_string_t)&Vertex_str,    /* Implement this method for exercice 02 */
        .__add__ = (binary_operator_t)&Vertex_add,    /* Implement this method for exercice 03 */
        .__sub__ = (binary_operator_t)&Vertex_sub,    /* Implement this method for exercice 03 */
        .__mul__ = (binary_operator_t)&Vertex_mul,
        .__div__ = (binary_operator_t)&Vertex_div,
        .__eq__ = (binary_comparator_t)&Vertex_eq,
        .__gt__ = (binary_comparator_t)&Vertex_gt,
        .__lt__ = (binary_comparator_t)&Vertex_lt
    },
    .x = 0,
    .y = 0,
    .z = 0
};

const Class   *Vertex = (const Class *)&_description;
