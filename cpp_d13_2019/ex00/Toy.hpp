//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// Toy.hpp
//

#ifndef _TOY_H_
#define _TOY_H_

#include "Picture.hpp"

class Toy {
    public:
        enum ToyType {
            BASIC_TOY,
            ALIEN
        };
    protected :
        ToyType type;
        std::string name;
        Picture Pic;
    public :
        const ToyType &getType() const;//getType, a getter for the toy’s type (there is no setter, as the type will never change),
        const std::string &getName() const;
        void setName(const std::string &);
        bool setAscii(const std::string &);//sets the toy’s picture to the file’s content.
        //Returns true if it succeeds, false otherwise
        const std::string &getAscii() const;//returns the toy’s picture as a string
    public :
        Toy();//setting the toy’s type to BASIC_TOY, its name to “toy” and its picture to an empty string
        ~Toy();
        Toy(const ToyType &type, const std::string &, const std::string &);
        //the ToyType, a string containing the toy’s name, and a string containing the picture’s filename.
};

#endif /*_TOY_H_*/
