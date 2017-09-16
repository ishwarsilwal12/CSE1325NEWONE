#include <string>
using namespace std;
class Fuse {
private: 
int time;
public:
Fuse(int times)
    {
        time = times;
    }
bool burn();
string to_string();
};


