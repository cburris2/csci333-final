#include <map>
#include <string>
#include <fstream>
#include <iostream>
#include <cstdlib>

using namespace std;
using std::string;
using std::pair;
using std::map;
using std::cout;
using std::endl;


int main(int argc, char **argv) {



map <string,int> nMap, nextMap; 
map<string,int>::iterator it;
string line;

ifstream NaughtyOrNice(argv[1]); /* ifstream to read in a file */

if(argc != 3){
   cout << "\n num args: = " << argc << "\n first: " << argv[0] 
   << "\n second: " <<  argv[1] << "\n end." << endl;
 
 cout << "/<usage> [filename] [threshold] " << endl;
 
 }
 else { 
	  
    cout << "\n filename" << argv[1] << endl;
 
    cout << "\n threshold" << argv[2] << endl;

    if(NaughtyOrNice.is_open()){

	  while(NaughtyOrNice.good()){
		 
		 getline(NaughtyOrNice,line);
		 
		 if(nMap.count(line) >= 1){
		 nMap[line]++;
		 }
		 else {
		 nMap.insert(pair<string,int>(line,1));
		 }
	  }
    }
    
    NaughtyOrNice.close();
    cout << "Begin Naughty/Nice List " << endl;

 }
    for(it = nMap.begin(); it != nMap.end(); it++){
	  
		 if(it->second >= atoi(argv[2])){ 
		 
		 cout << "Name: " << it->first << " Nice" << endl;


		 }
		 

    }
    
    for(it = nMap.begin(); it != nMap.end(); it++){
	  
		 if(it->second <= atoi(argv[2])){ 
		 
		 cout << "Name: " << it->first << " Naughty" << endl;


		 }
		 

    }
    
	  
    cout << "End Naughty/Nice List " << endl;
return 0;

}
