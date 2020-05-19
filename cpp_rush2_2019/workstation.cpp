#include "workstation.hpp"

Table Table::setTable(int objetNb)
{
    if (objetNb > 1O)
        std::cerr << "Error : too much object in the table\n";
    else if (objetNb == 10)
        std::cout << "There is no more place in the table\n";
    else
        std::cout << "There is " << 10 - objetNb << "places in the table\n";
}

