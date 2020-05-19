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
        const ToyType &getType() const;
        const std::string &getName() const;
        void setName(const std::string &);
        bool setAscii(const std::string &);
        const std::string &getAscii() const;
    public :
        Toy();
        ~Toy();
        Toy(const ToyType &type, const std::string &, const std::string &);
    public:
        Toy(const Toy &);
        Toy &operator=(const Toy &);
};

#endif /*_TOY_H_*/
