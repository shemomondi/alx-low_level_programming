#include <stdio.h> 
#include <stdlib.h> 
#include <dirent.h> 
#include <string.h>

int main(void) 
{ 
	DIR *dir; struct dirent *entry; char command[530];

// Open the current directory
dir = opendir(".");
if (dir == NULL) {
perror("Unable to open directory");
exit(EXIT_FAILURE);
}

// Loop through all the files in the directory
while ((entry = readdir(dir)) != NULL) {
// Check if the file is a .c file
if (strstr(entry->d_name, ".c") != NULL) {
// Create the command to compile the .c file into a shared library
sprintf(command, "gcc -c -fPIC %s -o %s.o", entry->d_name, entry->d_name);
system(command);
}
}

// Close the directory
closedir(dir);

// Create the command to link all the .o files into a dynamic library
sprintf(command, "gcc -shared -o liball.so *.o");
system(command);

return 0;
}
