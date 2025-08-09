#include <iostream>
#include <string>

using namespace std;
// file creation
int main(){
    static const char *originalfile= "originalFile.txt";
    
    /* Renaming File */
    static const char *editedfile= "editedFile.txt";
    // rename(originalfile, editedfile);

    /* Remove file */

    remove(editedfile);

    // FILE *fh = fopen(originalfile, "r"); // w->write
    // fclose(fh);
    return 0;
}