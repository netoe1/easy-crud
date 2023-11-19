#ifndef ROUTER_CPP
#define ROUTER_CPP
#include <iostream>
#include <stdexcept>
#include <locale>
#include <string>

using namespace std;

class Router
{
public:
    int id;
    string filename;

    void stringify(string *str_ptr)
    {
        try
        {
            if (!str_ptr->empty())
            {
                string output = "\nID:" + this->id + "\nFilename:" + this->filename;

                return;
            }

            throw new invalid_argument("[easy-crud]:Error---> You provide an invalid pointer to stringify the string!->");
        }
        catch (exception err)
        {
            throw err;
        }
    }
};
#endif
