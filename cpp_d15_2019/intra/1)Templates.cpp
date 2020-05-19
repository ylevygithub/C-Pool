/*
In today's videos, we will be discussing one of C++'s most powerful tools:
templates.
Templates are a way to write generic, type-safe code,
which you can then use for any type you might want in the future.
This might sound complicated at first,
but you'll quickly understand what I am talking about.
Until now, when writing a function,
you specified its parameter types explicitly.
For example, if you wanted an "add" function that would add two values,
you would have to specify its parameters as ints,
and then if you wanted to call it for doubles
you would use parameter polymorphism
to have several versions of the function.
This is nice,
but leads to a very large codebase of functions
that all do the exact same thing.
Templates let you avoid this issue by writing your code once,
and having your compiler automatically generate the function for the types you want.
As we will discuss in the following videos,
templates let you generate both functions and classes,
to help make your code re-usable in any situation.
We're writing the same code over and over again,
and simply changing the type.
What we're doing every time is this:
And replacing T with a different type, every time.
Wouldn't it be nice to just write this and have it work with any type?
Well, we can, by simply adding one thing:
Here, I'm declaring that "add" is a function template,
in which T is a type name (the name of a type).
When I want to use the function,
any occurrence of T will be automatically replaced
with the name of the type I am using.
T is called a template parameter.
It works just like a function parameter
as it is specified by the user,
but will be a type instead of a value.
Let's see how to call the function:
The syntax for calling the function is the same as for normal functions,
except I specify the template parameter between angle brackets.
If I compile and run, you can see my add function works for ints.
If I try to use my function for doubles and floats,
you can see I don't have to write any additional code,
and it still works fine.
As you can see, using templates
stops us from having to define the same function for a multitude of types.
*/

