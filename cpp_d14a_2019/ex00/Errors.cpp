//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// Errors.cpp
//

/*
Errors must have to comply with the following inheritance tree:
-> `std :: exception `
    -> `NasaError `
        -> `LifeCriticalError `
        -> `MissionCriticalError `
        -> `CommunicationError `
        -> `UserError `
The exceptions’ getComponent() method should return the name of the component, which they receive as
their second constructor parameter.

Note that CommunicationError’s getComponent method should always return “CommunicationDevice”.
getComponent() must have the following prototype:
const std :: string & getComponent () const ;
*/

#include "Errors.hpp"

std::string const &NasaError::getComponent() const
{
    return (this->_component);
}

NasaError::NasaError(){}
NasaError::~NasaError(){}

NasaError::NasaError(std::string const &message, std::string const &component = "Unknown")
{
    this->_message = message;
}

MissionCriticalError::MissionCriticalError(std::string const &message, std::string const &component = "Unknown")
{
    this->_message = message;
}

LifeCriticalError::LifeCriticalError(std::string const &message, std::string const &component = "Unknown")
{
    this->_message = message;
}

UserError::UserError(std::string const &message, std::string const &component = "Unknown")
{
    this->_message = message;
}

CommunicationError::CommunicationError(std::string const &message)
{
    this->_message = message;
}
