/*
When declaring a function template
like the add example from the previous video,
we aren't actually writing code that will be turned into an object file.
That is, declaring a function template doesn't actually create a function.
Instead, it simply provides "text"
that the compiler will use to generate the actual function code.
That code will only be generated when the function is used with a given type.
This means that when you use a function template,
you need to have access to its original source code.
That is, you need to have the actual template definition,
and not just its declaration
like you would to call a normal function.
To make things a bit more clear,
let's try moving our add function to a separate file:
I've created a new add.cpp file
which contains our template definition,
and an add.hpp header file
which contains its declaration,
which I include from my main file.
If I try to compile, you can see I get undefined functions.
That's because, when I try to call the int version of my add function from my main file,
it doesn't have access to the contents of the add.cpp file.
The only thing it has access to is what's in the header
and that's not enough to generate the function code.
The solution to this problem is so simple it's stupid:
always write your template code directly in the header files, like so:
Everything now works fine, and I can use my add function from any other file in my project.
*/

