#include <string>
using namespace std;
class Puzzle
{
private:
	string _solution;
        bool _guesses[255];
public:
	Puzzle (string solution)
    {
            _solution = solution;
            _guesses[255]=false;
             
    }
	bool guess (char c);
	bool solve (string proposed_solution);
	string to_string();
	string get_Solution();
};


