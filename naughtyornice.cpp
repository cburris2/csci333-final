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


int main(int argc, char **argv) {

int counter = 1;

//string nOrNice[5];

map <string,int> nMap, nextMap; 

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
		    
		   
		 getline (NaughtyOrNice,line);
		 nMap.insert(pair<string,int>(line,counter));
		 cout << "Name: " << line << endl;
		// cout << argv[2] << endl;
		 cout << nMap.count(line) << endl;
    }
    NaughtyOrNice.close();


}


}

return 0;

}
