/*
** EPITECH PROJECT, 2020
** c++pool
** File description:
** my_cat.cpp
*/

#include <iostream>
#include <fstream>
#include <string>

void print_error(int ac, char **av)
{
    switch (ac)
    {
        case 2:std::cerr << "my_cat: " << av[1] << ": No such file or directory" << std::endl;break;
        case 3:std::cerr << "my_cat: " << av[1] << ": No such file or directory" << std::endl;
        std::cerr << "my_cat: " << av[2] << ": No such file or directory" << std::endl;break;
        case 4:std::cerr << "my_cat: " << av[1] << ": No such file or directory" << std::endl;
        std::cerr << "my_cat: " << av[2] << ": No such file or directory" << std::endl;
        std::cerr << "my_cat: " << av[3] << ": No such file or directory" << std::endl;break;
        case 5:std::cerr << "my_cat: " << av[1] << ": No such file or directory" << std::endl;
        std::cerr << "my_cat: " << av[2] << ": No such file or directory" << std::endl;
        std::cerr << "my_cat: " << av[3] << ": No such file or directory" << std::endl;
        std::cerr << "my_cat: " << av[4] << ": No such file or directory" << std::endl;break;
        default:
            break;
    }
}

void my_cat(int ac, char **av)
{
    std::string line;
    std::ifstream myfile (av[1]);
    std::ifstream myfile2 (av[2]);

    if (ac == 1)
        std::cerr << "my_cat: Usage: ./my_cat file [...]" << std::endl;
    else if (myfile.fail() && av[1] != NULL)
        print_error(ac, av);
    if (myfile.is_open()) {
        while (getline(myfile,line))
            std::cout << line << '\n';
        myfile.close();
    }
    if (myfile2.is_open()) {
        while (getline(myfile2,line))
            std::cout << line << '\n';
        myfile2.close();
    }
}

int main (int ac, char **av)
{
    my_cat(ac, av);
    return (0);
}
