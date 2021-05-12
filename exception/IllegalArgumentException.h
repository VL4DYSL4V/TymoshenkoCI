//
// Created by Vladislav on 12.05.2021.
//

#ifndef UNTITLED_ILLEGALARGUMENTEXCEPTION_H
#define UNTITLED_ILLEGALARGUMENTEXCEPTION_H

#include <bits/exception.h>
#include <string>

class IllegalArgumentException : public std::exception{

private:
    std::string message = "Exception!";

public:

    IllegalArgumentException(){

    }

    IllegalArgumentException(std::string message){
        this->message=message;
    }

    std::string getMessage(){
        return this->message;
    }
};


#endif //UNTITLED_ILLEGALARGUMENTEXCEPTION_H
