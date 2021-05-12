//
// Created by Vladislav on 12.05.2021.
//

#ifndef UNTITLED_LINEARCONGRUENTRANDOM_H
#define UNTITLED_LINEARCONGRUENTRANDOM_H

#include "Random.h"
#include "../exception/IllegalArgumentException.h"

class LinearCongruentRandom : public Random {

private:
    int a;
    int b;
    int mod;

public:

    LinearCongruentRandom() {
        this->a = 10;
        this->b = 15;
        this->mod = 778752819;
    }

    LinearCongruentRandom(int a, int b, int mod) {
        if(a <= 0 || b <= 0 || mod <= 0){
            throw IllegalArgumentException("Parameters must be above 0");
        }
        this->a = a;
        this->b = b;
        this->mod = mod;
    }



    //next = (a * prev + b) % mod
    int nextInt() override;

};

#endif //UNTITLED_LINEARCONGRUENTRANDOM_H
