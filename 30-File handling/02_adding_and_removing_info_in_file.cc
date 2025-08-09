#include <iostream>
#include <string>

using namespace std;

constexpr int maxbuffer = 1024;

int main(){
    const char *filename = "thisFile.txt";
    const char *information="Dhingana Dhingana";


    /* writing in file */
    // FILE *fh=fopen(filename, "w");
    // for (int i = 0; i < 50; ++i)
    // {
    //     fputs(information, fh);        
    // }
    // fclose(fh);


    /* Reading File */
    // char buff[maxbuffer];
    // FILE * fh =fopen(filename, "r");

    // while (fgets(buff, maxbuffer, fh))
    // {
    //     fputs(buff, stdout);
    // }
    
    // fclose(fh);


    
    return 0;
}