# C++ Custom Exceptions

A learning exercise to understand throwing cpp custom exceptions.

## Motivation

For Genvis, I need to throw and handle a custom kafka exception from a processing object, which will then trigger a prometheus metric.

Currently, the state is that the exception throws, and crashes the program. 

In essence, the exception class is not being handled correctly.

## Environment

I am running with the following environment;

* ubuntu 18.04.
* gcc version 7.4.0 
* cmake version 3.14

## Steps

* First, create a cpp custom exception struct in main.cpp, which is thrown.
* Then, handle the custom exception throw.
* Then, create a cpp custom exception class in main, which is thrown, and handled.
* Separate the custom exception class into it's own cpp file w/ header file. 
* Create a class that runs from main, and throws the exception.


