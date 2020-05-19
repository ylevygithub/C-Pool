//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// Errors.hpp
//

#ifndef ERRORS_HPP_
#define ERRORS_HPP_

#include <iostream>
#include <string>

class NasaError
{
    public:
        NasaError();
        ~NasaError();
        NasaError(std::string const &message,
                std::string const &component = "Unknown");
        const std::string &getComponent() const;
    private:
        std::string _message;
        std::string _component;
};

class MissionCriticalError : public NasaError
{
    public:
        MissionCriticalError(std::string const &message,
                std::string const &component = "Unknown");
    private:
        std::string _message;
        std::string _component;
};

class LifeCriticalError : public NasaError
{
    public:
        LifeCriticalError(std::string const &message,
                std::string const &component = "Unknown");
    private:
        std::string _message;
        std::string _component;
};

class UserError : public NasaError
{
    public:
        UserError(std::string const &message,
                std::string const &component = "Unknown");
    private:
        std::string _message;
        std::string _component;
};

class CommunicationError : public NasaError
{
    public:
        CommunicationError(std::string const &message);
    private:
        std::string _message;
};

#endif
