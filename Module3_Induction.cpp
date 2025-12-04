#include "Module3_Induction.h"
#include "UnidiscEngine.h"

bool UnidiscEngine::verifyPrereqChainRecursive(string targetCourse, int depth)
{
    if (depth > 15) return false;
    for (int i = 0; i < prereqCount; i++)
    {
        if (prerequisites[i].elementB == targetCourse)
        {
            cout << "  Requires " << prerequisites[i].elementA << endl;
            if (verifyPrereqChainRecursive(prerequisites[i].elementA, depth + 1) == false) return false;
        }
    }
    return true;
}

void UnidiscEngine::verifyPrereqChainInduction(string base, string target)
{
    cout << "--- Module 3: Induction ---" << endl;
    cout << "Verifying " << base << " -> " << target << endl;
    if (verifyPrereqChainRecursive(target, 0)) cout << "Chain VALID." << endl;
    else cout << "Chain INVALID." << endl;
}