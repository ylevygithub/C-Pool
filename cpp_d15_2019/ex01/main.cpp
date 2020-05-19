# include <iostream>
# include <string>
# include "ex01.hpp"

int main ()
{
    int a = 2;
    int b = 2;
    std::cout << "toto a, b;"<< std :: endl ;
    std::cout << "compare(a, b) return " << compare(a, b) << std :: endl ;
    a = 1;
    b = 2;
    std::cout << "compare(1, 2) return " << compare(a, b) << std :: endl ;
    std::cout << "compare<const char*>(“chaineZ”, “chaineA42”) return " << std :: endl ;
    const char *s1 = "42";
    const char *s2 = "lulz";
    std :: cout << "const char *s1 = “42”, *s2 = “lulz”" << std :: endl ;
    std :: cout << "compare(s1, s2) return " << compare(s1, s2) << std :: endl ;
    // std :: cout << "max(c, d) = " << :: max (c , d ) << std :: endl ;
    // std :: cout << "add(c, d) = "<< ::add(c, d) << std :: endl ;
}
