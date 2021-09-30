/**************************************************************************************
Name: Ildiko Fallahpour
Coding 03
Purpose: This program will will read in a text file, then count and display the letter, 
         whitespace and word count.
**************************************************************************************/

#include "main.h"

int main(int argc, char** argv) {

    fstream myfile;
	
    if (argc > 1 && argc < 3){
       myfile.open(argv[1]);
    }
       if (myfile.is_open()){
          display_file(myfile);
          myfile.close();
       } else {
              cout <<"invalid filename: badfile"<< endl;
         }
         
         cout << endl;
           
	  
    return 0;
}


