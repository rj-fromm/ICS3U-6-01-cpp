// Copyright (c) 2019 RJ Fromm All rights reserved.
//
// Created by: RJ Fromm
// Created on: Dec 2019
// This program makes random number and finds average

#include <iostream>
#include <list>


main() {
    // This is generate 10 random number from 0-10 and figures out averag

    // Sets seed as time
    srand(time(NULL));

    // variables
    int repeater;
    float number;
    float sum = 0;
    double average;
    std::list<int> numbers;

    // process
    for (repeater = 0; repeater < 10; repeater++) {
        number = rand() % 100 + 1;
        numbers.push_back(number);
        // output
        std::cout << number << std::endl;
        sum = sum + number;
    }

    average = sum / repeater;

    // output
    std::cout << "\n" << average << std::endl;
}
