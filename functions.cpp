/**************************************************************************************
Name: Ildiko Fallahpour
Coding 03
Purpose: This program will will read in a text file, then count and display the letter, 
         whitespace and word count.
**************************************************************************************/

#include "functions.h"

int count_spaces(string line){
    
    int i;
    int s_count = 0;
    
    for (i=0; line[i]; i++){
        
        if (line[i] == ' '){
    
        s_count++;
        }
    }
    
    return s_count;
}

int count_non_spaces(string line){

    int k;
    int count=0;
    
    for (k=0; line[k]; k++){
        
        count++;
    }
    
    return count++;
}   
        
        
        
void display_file(fstream &fin){
    
    string line;
    
    int space_count = 0;
    int non_space_count = 0;
    

    while (getline(fin, line)){
    		
          space_count = count_spaces(line);
          non_space_count = count_non_spaces(line);
        
         if (space_count==0)
          
            cout << "[blank Line ]" << endl;
                        
        
         else   
        
             cout << line << " [" << (non_space_count)-(space_count)-(1) << " letters, " << space_count << " spaces, " << (space_count)+(1) << " words]" << endl;
       
        
    	
    }  
}
