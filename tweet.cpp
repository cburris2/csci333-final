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
ofstream tweetFile;

string tweetLine;
map <string,int> tweetMap; 

map<string,int>::iterator it;
string line,subLine;
int uniqueCount,total;
double lex;
ifstream tweets ("tweets"); /* ifstream for input, read tweets file*/
if(tweets.is_open()){
    
     while(tweets.good()){

    

		 getline(tweets,line,' ');

		 if(tweetMap.count(line) >= 1){
		 tweetMap[line]++;
		 }
		 else {
		 tweetMap.insert(pair<string,int>(line,1));
		 total++;
		 }


    }
    tweets.close();

}
	  tweetFile.open("tweets.txt");
    
    for(it = tweetMap.begin(); it != tweetMap.end(); it++){
	  
		 uniqueCount++;
	   
	   
	   if(it->second <= 5000 ){ 
		 
		// cout << it->first<< "Appears:  " << it->second << endl;
		
		tweetFile << it->first << "  Appears:  " << it->second << endl;
     
          }
		 
		 

    } 
	  lex = total / tweetMap.size();
	  
 tweetFile << "The number of unique words are " << tweetMap.size() << "."<< endl;  
	  
     tweetFile << "Total number of words are " << total <<  "."<< endl;  

	  tweetFile << "Lexical Diversity is equal to " << lex << "." << endl;  

	  tweetFile.close();




return 0;

}
