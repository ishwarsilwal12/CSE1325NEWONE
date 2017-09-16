
#include "puzzle.h"

    bool Puzzle::guess(char c)
    {

        if ((c >= 'a' && c <= 'z') && (_guesses[c] == false)){
         _guesses[c]=true;
         return true;
          }
         else{
          return false;
             }          
}

    bool Puzzle::solve(string proposed_solution)
    {

        if (proposed_solution == _solution){

            return true;
}
        else {
            return false;
}

    }

    string Puzzle::to_string()
    {

        string temp = "";

        int i;

        for (i = 0; i < _solution.length(); i++)
        {

            if ((_guesses[_solution[i]] == true) || (_solution[i]==' '))
            {
             temp = temp + _solution[i];
                
            }
            else 
        {
temp = temp + "_";          
 
            }

        }
        return temp;

    }

    string Puzzle::get_Solution()
    {

        return _solution;

    }


