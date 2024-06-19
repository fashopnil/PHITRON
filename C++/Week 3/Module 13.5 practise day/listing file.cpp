#include <stdio.h>
#include <dirent.h>

int main() {
    DIR *directory;
    struct dirent *entry;

    char *path ="C:\\Users\\User\\Desktop\\Phitron"; // Replace with the actual path

    // Open the directory
    directory = opendir(path);
    if (directory == NULL) {
        perror("Unable to open directory");
        return 1;
    }

    // Read directory entries
    //arrayr vitore nite hobe etake. 
    while((entry = readdir(directory)) != NULL) {
        printf("%s\n", entry->d_name);
    }

    // Close the directory
    closedir(directory);

    return 0;
}
