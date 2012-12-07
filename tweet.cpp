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
ofstream tweetFile,lexFile;

string tweetLine;
map <string,int> tweetMap; 

map<string,int>::iterator it;
string line;
int uniqueCount = 0;
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
		 }


    }
    tweets.close();

}
	  tweetFile.open("tweets.txt");
    
    for(it = tweetMap.begin(); it != tweetMap.end(); it++){
	   
	   if(it->second <= 8000 ){ 
		 
		tweetFile << it->first << "  Appears:  " << it->second << endl;
     
          }
		 
		 

    }



    for(it = tweetMap.begin(); it != tweetMap.end(); it++){
	   
		uniqueCount += it->second;	
     
    } 


	  tweetFile.close();



	  lexFile.open("lex.txt");
	  lex = uniqueCount / 37337; 
	  
 lexFile << "The number of unique words are 37337." << endl; 
	  
     lexFile << "Total number of words are " << uniqueCount << "."<< endl;  

	  lexFile << "Lexical Diversity is equal to " << lex << "." << endl;  

	  lexFile.close();


return 0;

}
