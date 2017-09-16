#include "fuse.h"
using namespace std;


    bool Fuse::burn()
    {

        time = time - 1;

        if (time > 0)
        {
            return true;
        }

        else
        {
            return false;
        }
    }

    string Fuse::to_string()
    {

        string fire = "  ";

        int i;
        

        for (i = 0; i < time; i++)
   
        {
           
            fire = fire + "_";
        }
        fire = fire + "*\n /\n,+,\n|_|\n" ;

        return fire;

    }

