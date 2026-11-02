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

*/
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