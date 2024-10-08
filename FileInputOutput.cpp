#include <iostream>
#include <fstream> //For file input and output
#include <string> //For string input

using namespace std;

int main()
{
    /*Writing to a file. Output.txt file will be created
    in the directory of this source file
    */
   ofstream outFile ("output.txt");
   outFile << "Writing to a file." << endl;
   outFile.close();

   //Reading from a file
   ifstream inFile("output.txt");
   string content;
   while (std::getline(inFile,content))
   {
    cout<< content << endl;
   }
   inFile.close(); //Close the file after reading its contents

   return 0;
}