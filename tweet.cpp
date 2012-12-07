#include <map>
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;
using std::string;
using std::pair;
using std::map;
using std::cout;
using std::endl;


int main() {


string tweetLine;
map <string,int> tweetMap; 

map<string,int>::iterator it;
string line,subLine;

ifstream tweets ("tweets"); /* ifstream for input, read tweets file*/
if(tweets.is_open()){
    
     while(tweets.good()){

    

		 getline(tweets,line,' ');

		 if(tweetMap.count(line) >= 1){
		 tweetMap[line]++;
		 }
		 else {
		 tweetMap.insert(pair<string,int>(line,1));
		 }


    }
    tweets.close();

}

    
    for(it = tweetMap.begin(); it != tweetMap.end(); it++){
	  
		 if(it->second <= 5000 ){ 
		 
		 cout << it->first<< "Appears:  " << it->second << endl;


		 }
		 

    }
    




return 0;

}
