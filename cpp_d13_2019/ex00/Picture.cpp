//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// Picture.cpp
//

#include "Picture.hpp"

Picture::Picture()//Creating a Picture without a filename as parameter sets data to an empty string.
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
    else
        this->data = "ERROR";
/*Creates a Picture object by loading the content of file.
If an error occurs, data must be set to “ERROR”.*/
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
/*Sets data’s value to the content of file.
If an error occurs, data must be set to “ERROR” and the function must return false.
Otherwise, it returns true*/
}
