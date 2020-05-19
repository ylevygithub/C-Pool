/*
When defining a class or function template,
there are sometimes special cases you want to deal with.
To illustrate this, let's go back to our "add" function template.
If we call add with string parameters,
it will simply concatenate our two strings.
This is nice, but not very practical.
In this example, it would be nice to have a space
automatically added between the two strings.
Instead of creating a new function for this,
I can use a mechanism called template specialization.
I can give the add function a special behavior
when it is called with strings.
To specialize my template, here's the syntax:
By doing this, I am specifying a different behavior for my function
when it is given strings as parameters.
Since there are no more template parameters,
this is like defining a normal function,
and will generate a symbol in our executable.
Be careful about this,
as defining the function in a header file
may lead to multiple definition errors during linkage.
As you can see, specializing the template created a symbol in the executable.
*/