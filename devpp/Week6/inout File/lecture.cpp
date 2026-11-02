/*
12pm 
Whats something i can try here?

So in this case theres students and test.. So ig it loops like based on the user's answers

maybe sumn that prints

anyway, we're learning something new. Okay okay this will be cool

Open ()
Use ()
Close (Why do we need to close it? Oh it will bug kah, is it like the memory handling, is this related)

ifsrream - input (Writing in a file)
ofstream - output (Just reading the file, is it like cat in terminal?)
()()()
fstream - for input or output to a file

the i and o bruh. 

ifsream infile;
ofstream outfile;

infile and outfile are like variablesmore,  specifically objects. > Is this fixed?

brooo lemme read the txt files. How lah

hmm what could this be
how would one use it? 
/"inout File"
*/

/*
"It's fine until it is not"
So if we dont close the file. It will take up sapce. 

wait what, cache lives in processor so if we restart, the ram just stays there, it doesnt clear it
if you shut down, then it clears up the cache. Is that the reason why if we just let it sleep, it would break the laptop

Oh woww you can do a for loop with the file thingy. but why would we want to do that?
Im seeing count and days, and also sales. I guess, its like declaring a variable but we save it straight into the file

*/

/* Reading the source.txt file
#include <iostream>
#include <fstream> //first time lesgooo, so this one allows us to access files > Im surprised the files are put inside the main function

using namespace std;

int main() {
    ifstream inputFile;
    string sentence;
    inputFile.open("source.txt");

    if (!inputFile.is_open()) {
        cout << "Error opening Text file!" << endl;
        return 1;
    }

    cout << "Reading data from the file.\n";

    //inputFile >> word;
    //cout << word;
    getline(inputFile, sentence);
    cout << sentence << endl;

    inputFile.close();
    return 0;
}
    */

/* Writing hellow into txt file
#include <iostream>
#include <fstream> //first time lesgooo, so this one allows us to access files > Im surprised the files are put inside the main function
#include <string>
using namespace std;

int main() {
    ofstream outputFile;
    
    outputFile.open("secret_message.txt");

    if (!outputFile.is_open()) {
        cout << "Error: Could not create or open the file!" << endl;
        return 1;
    }
    
    cout << "Creating and writing to the file...\n";

    outputFile << "Hellowww there" << endl;

    outputFile.close(); //If we forgot ot close right. Other than taskmanager, how do we close the file?

    cout << "Done! Look inside your project folder" << endl;

    return 0;
}
*/


//What about this, if user wants to put in the data
#include <iostream>
#include <fstream> //first time lesgooo, so this one allows us to access files > Im surprised the files are put inside the main function
#include <string>
using namespace std;

int main() {
    ofstream outputFile;
    string filename, sentence;
    cout << "Enter filename: ";
    cin >> filename;

    cout << "Whadaya wanna say?: ";
    cin >> sentence;

    outputFile.open(filename);

    if (!outputFile.is_open()) {
        cout << "Error: Could not create or open the file!" << endl;
        return 1;
    }
    
    cout << "Creating and writing to the file...\n";

    outputFile << "Hellowww there" << endl;

    outputFile.close(); //If we forgot to close right. Other than taskmanager, how do we close the file? >> hmm google says we dont have to do anything since cpp has auto close thingy

    cout << "Done! Look inside your project folder" << endl;

    return 0;
}

///////////////////////////////////////////////////

//break only escapes the switch 
//for some reason, back then, they dont encourage students to use 'break' and they will get penalized for that because its not the programmer's way
//Then how lah? 
/*
Theres also continue

break stops from the current loop to keep going, and goes to the lines of code outside.

next iteration? is continue similar to pass in python

I forgot you can put an if statement in a for loop, to ask the user repeatedly if they wanna end the program again

OKay if we use continue. Why cant we not use continue. 

Oh it skips the current loop huh. Thats crazy. Continue vs Break hmmm
*/