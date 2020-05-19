/*
In C, error handling was done using function return values.
If a function was susceptible to cause an error,
it would have to return an integer,
and specify in a comment or man page
what would be returned if an error occured.
This lead to some incoherencies,
for example, the read system call returns a signed value,
which represents the number of bytes read.
When you think about it, it can't read a negative number of bytes,
so why not return an unsigned value?
Well, read returns -1 if an error occurs.
This is counter-intuitive, but unfortunately
it was the only way of conveying errors to callers.
In C++, a new mechanism called exceptions is introduced to handle errors,
which we will discuss in the following videos.
*/

