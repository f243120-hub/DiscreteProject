#ifndef UNIDISC_ENGINE_H
#define UNIDISC_ENGINE_H

#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string id;
    string name;
    string program;
    int semester;
};

struct Course
{
    string code;
    string title;
    int creditHours;
};

struct Faculty
{
    string id;
    string name;
};

struct Room
{
    string id;
    string name;
};

struct RelationPair
{
    string elementA;
    string elementB;
};

#endif
