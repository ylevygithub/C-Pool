/*
In computer programming, a cast is the conversion, or re-interpretation,
of one type into another.
For example, in yesterday's videos,
we had an Animal and a Koala class.
We created a koala, but re-interpreted it into an Animal.
Sometimes, when programming in C,
you would also be forced to explicitly cast variables to a certain type.
You can see here that the first line of our main function
doesn't have anything that clearly indicates we are performing a cast.
That's called an implicit cast,
*/

#include <iostream>
#include <string>

class animal {
};

class Koala : public animal {
};

int main ()
{
    Animal *p = new Koala;

    double d = 20.5;
    int i = (int)d;
    return(0);
}
/*
whereas the third line of our main function is an explicit cast.
In object-oriented programming,
casts become an important part of the language
as you will be using polymorphic types,
and will often want to use objects of one type as another.
This leads to the notion of upcasting and downcasting:
Here, I'm implicitly casting a Koala into an Animal.
Animal being higher up in the class hierarchy,
this is called an upcast.
Upcasts are safe, as we can be sure a Koala is an Animal.
In this new line, I'm converting my Animal reference into a Koala reference.
Koala being lower in the class hierarchy,
this is called a downcast.
Downcasts aren't safe, as we can't be sure that the animal we're using is indeed a Koala.
It might be a Pony, or a Dog!
*/

int main ()
{
    Koala k;

//    animal &a = k; // Upcast (Koala -> animal)        JE LES MET EN COMMENTAIRES CAR MA RAM PÈTE SON CABLE
//    Koala &kref = a;// Downcast (animal -> Koala )
    return(0);
}
/*
If I try to compile, I'm faced with an error:
the downcast being unsafe, I have to use an explicit cast to do the conversion, like so:
In C++, there are several types of casts that can be used,
depending on the situation,
and we'll explore them in the upcoming videos.
*/