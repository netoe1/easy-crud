#ifndef FUNCTION_CPP
#define FUNCTION_CPP
#include <fstream>
#include <string>
#include <stdexcept>

using namespace std;

static string dataFile;

void createRouter(string filename)
{
    try
    {
        if (!filename.empty())
        {
            ofstream file(filename);

            return;
        }
    }
    catch (exception e)
    {

        throw e;
    }
}
#endif
