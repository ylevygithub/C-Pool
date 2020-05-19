/*
** EPITECH PROJECT, 2020
** undefined
** File description:
** Object
*/

#ifndef OBJECT_HPP_
#define OBJECT_HPP_

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

class Object {
	public:
		Object();
		~Object();
        virtual void isTaken() = 0;
        virtual void wrapMeThat(Object *obj) = 0;
        std::string title;
        virtual Object *getObj() = 0;
        virtual void setObj() = 0;
        virtual void inside() = 0;
    protected:
	private:
};

class Toy : public Object{
    public:
    protected:
};

class Teddy : public Toy {
    public:
    void isTaken();
        void wrapMeThat(Object *obj) override{obj = obj;};
        void setObj(){};
        Object *getObj();
        Teddy();
        void inside(){};
        ~Teddy();
};

class LittlePony : public Toy {
    public:
    void wrapMeThat(Object *obj) override{obj = obj;};
    void isTaken();
        Object *getObj();
        void inside(){};
        void setObj(){};
        LittlePony();
        ~LittlePony();
};

Object **MyUnitTests();

#endif /* !OBJECT_HPP_ */
