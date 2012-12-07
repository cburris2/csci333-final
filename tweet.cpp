#include <map>
#include <string>
#include <fstream>
#include <iostream>

using namespace std;
using std::string;
using std::pair;
using std::map;
using std::cout;
using std::endl;


int main() {

//int counter;

//string tweetArray[5];

map <string,int> tweetMap; 

string line;

ifstream tweets ("tweets"); /* ifstream for input, read tweets file*/
if(tweets.is_open()){
    
    while(tweets.good()){

    

     getline (tweets,line);
     cout << line << endl;


    }
    tweets.close();

    




}
else{ cout << "Unable to open file." << endl; }

return 0;

}
