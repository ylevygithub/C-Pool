/*
Just like functions, templates can take multiple parameters.
For instance, let's say I want to create a type called Pair:
I want Pairs to hold two values, called "first" and "second",
with types that will be defined as template parameters:
I just have one problem:
my two values will always have the same type T.
To solve this, I can simply add another template parameter, like so:
By adding a template parameter,
I'm simply specifying that users will have to indicate
another type when creating a Pair.
If I now want to use my class template,
the syntax is the same as before.
*/