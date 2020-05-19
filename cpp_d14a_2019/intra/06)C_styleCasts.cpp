/*
After learning about all these new casts,
you might be thinking "but where did my good old C casts go, with their wacky syntax?".
They actually still exist in C++, but don't do exactly the same thing as in C.
Here is the cppreference page about C-style casts.
As you can see, using a C-style cast will make your compiler try various combinations of other casts until it compiles,
ending with a reinterpret_cast combined with a const_cast.
These are rather drastic measures,
and using a C-style cast generally means you're not sure what cast you want to use.
It is preferable to know your tools, instead of blindly using a broken one.
C-style casts should only be used when converting integers.
*/
