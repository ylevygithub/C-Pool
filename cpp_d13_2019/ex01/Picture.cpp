//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// Picture.cpp
//

#include "Picture.hpp"

Picture::Picture()
{
    this->data = "";
}

Picture::~Picture()
{
}

Picture::Picture(const std::string &file)
{
    std::ifstream fileStream(file.c_str());
    std::string line;

    if (fileStream) {
        while (getline(fileStream, line, '\0'))
            this->data = this->data + line;
        fileStream.close();
    }
    // else
    //     this->data = "ERROR";
}

bool Picture::getPictureFromFile(const std::string &file)
{
    std::ifstream fileStream(file.c_str());
    std::string line;

    if (fileStream) {
        while (getline(fileStream, line, '\0'))
            this->data = this->data + line;
        fileStream.close();
    }
    else {
        this->data = "ERROR";
        return (false);
    }
    return (true);
}

Picture::Picture (const Picture &myPic)
{
    this->data = myPic.data;
}

Picture &Picture::operator=(const Picture &myPic)
{
    if (&myPic != this)
        this->data = myPic.data;
    return (*this);
}
