#include "Entry.h"
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main(){

    Entry<int>* e = new Entry<int>("hello", 5);


    cout << e->getKey() << endl;


    cout << e->getValue() << endl;

    delete e;

return 0;
}
