#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main(){
     
    string filename = "K218B_ver2.txt"; //File to open  
    string line;  //string to hold each line of text file
    vector<string> lines;  //Vector of strings to hold each line of the text file.
    string output_filename = "K218B_ver1.csv";  //Output file name.

    //Load text file and put its rows into a string vector.
    try{
        ifstream myfile (filename);
	if (!myfile.is_open()){
	    throw 20;
	}
	cout << "File was opened..." << "\n";
	cout << "File being read into string vector: " << "\n\n";
	while(getline(myfile, line)){
	    lines.push_back(line);    	
	    }
	myfile.close();
       }
    catch (int myNum){
        cout << "File either isn't found our couldn't be opened." << "\n";  
	}

    //Write text file lines to CSV.
    ofstream outputFile("K218B_ver2.csv");

    if(!outputFile.is_open()){
        cerr << "Error: unable to open file " << output_filename << " for writing." << "\n";
    }

    for(const string& line_out: lines){
        outputFile << line_out << "\n";
    }

    outputFile.close();
    cout << "CSV file " << output_filename << " has been created successfully." << "\n";

    return 0;
}
