#include <iostream>
#include "Toy.hpp"

int main()
{
    Toy toto;
    Toy test;
    Toy ET(Toy ::ALIEN, "green", "./buzz.txt");
    test = ET;
    Toy zbeub(ET);
    toto.setName(" TOTO !");
    if (toto.getType() == Toy ::BASIC_TOY)
        std ::cout << " basic toy: " << toto.getName() << std ::endl
                   << toto.getAscii() << std ::endl;
    if (ET.getType() == Toy ::ALIEN)
        std ::cout << " this alien is: " << ET.getName() << std ::endl
                   << ET.getAscii() << std ::endl;
    if (test.getType() == Toy ::ALIEN)
        std ::cout << " this alien is: " << test.getName() << std ::endl
                   << test.getAscii() << std ::endl;
    if (zbeub.getType() == Toy ::ALIEN)
        std ::cout << " this alien is: " << zbeub.getName() << std ::endl
                   << zbeub.getAscii() << std ::endl;
    return 0;
}
