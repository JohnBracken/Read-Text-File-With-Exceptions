#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
     
    string filename = "text_file.txt";   
    string line;
    try{
        ifstream myfile (filename);
	if (!myfile.is_open()){
	    throw 20;
	}
	cout << "File was opened..." << "\n";
	cout << "File contents: " << "\n\n";
	while(getline(myfile, line)){
	    cout << line << "\n";    	
	    }
	myfile.close();
       }
    catch (int myNum){
        cout << "File either isn't found our couldn't be opened." << "\n";  
	}

    return 0;
}
