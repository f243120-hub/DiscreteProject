#ifndef RAYAN_H
#define RAYAN_H

#include "UnidiscEngine.h"

class UnidiscEngine
{
private:
    Student* students;
    int studentCount;
    int studentCap;

    Course* courses;
    int courseCount;
    int courseCap;

    Faculty* faculties;
    int facultyCount;
    int facultyCap;

    Room* rooms;
    int roomCount;
    int roomCap;

    RelationPair* prerequisites;
    int prereqCount;
    int prereqCap;

    void resizeStudentArray();
    void resizeCourseArray();
    void resizeFacultyArray();
    void resizeRoomArray();
    void resizeRelationArray(RelationPair*& arr, int& cap);

    int getStudentIndex(string id);
    int getCourseIndex(string code);

    void printCombinationsRecursive(string* data, int n, int r, int index, string* current, int i);
    int factorial(int n);
    bool verifyPrereqChainRecursive(string targetCourse, int depth);

public:
    UnidiscEngine();
    ~UnidiscEngine();

    void addPrerequisite(string pre, string post);
    void generateCourseSchedule();
    void generateStudentGroups(int k);
    void verifyPrereqChainInduction(string base, string target);
    void checkIndirectConflicts();
};

#endif
