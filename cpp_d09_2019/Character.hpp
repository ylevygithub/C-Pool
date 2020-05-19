//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// Character.hpp
//

#ifndef _Character_H_
# define _Character_H_

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>

class 		Character {
    protected:
        std::string		name;//mandatory
        int				level;//mandatory
        int				PV;//health points. Max = 100.
        int				Power;//energy points. Max = 100.

    protected:
        int				Strength;
        int				Stamina;
        int				Intelligence;
        int 			Spirit;
        int				Agility;

    public:
        enum AttackRange {
            CLOSE,//default value
            RANGE//AttackRange
        };	
        AttackRange		Range;

    public:
       explicit Character(const std::string &, int);
        ~Character();

    public:
        const std::string &getName() const;
        int getLvl() const;
        int getPv() const;
        int getPower() const;

        int						CloseAttack();
        void					Heal();
        int						RangeAttack();
        void					RestorePower();
        void					TakeDamage(int);
};

#endif /*_Character_H_*/
