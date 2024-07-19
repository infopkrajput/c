#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <sys/stat.h>
#include <limits.h>

void removeSubstring(char *s, const char *toremove)
{
    while ((s = strstr(s, toremove)))
    {
        memmove(s, s + strlen(toremove), 1 + strlen(s + strlen(toremove)));
    }
}

void renameFiles(const char *dirname, const char *substring)
{
    DIR *dir;
    struct dirent *entry;
    struct stat file_stat;

    if ((dir = opendir(dirname)) != NULL)
    {
        while ((entry = readdir(dir)) != NULL)
        {
            // Construct the full path to the file
            char oldname[PATH_MAX];
            char newname[PATH_MAX];
            snprintf(oldname, sizeof(oldname), "%s/%s", dirname, entry->d_name);

            // Check if the entry is a regular file
            if (stat(oldname, &file_stat) == 0 && S_ISREG(file_stat.st_mode))
            {
                // Remove the substring "Copy of " from the filename
                strcpy(newname, entry->d_name);
                removeSubstring(newname, substring);

                // Construct the full path to the new filename
                char new_full_path[PATH_MAX];
                snprintf(new_full_path, sizeof(new_full_path), "%s/%s", dirname, newname);

                // Rename the file
                if (strcmp(oldname, new_full_path) != 0)
                { // If the name is changed
                    if (rename(oldname, new_full_path) == 0)
                    {
                        printf("Renamed %s to %s\n", oldname, new_full_path);
                    }
                    else
                    {
                        printf("Failed to rename %s\n", oldname);
                    }
                }
            }
        }
        closedir(dir);
    }
    else
    {
        perror("Failed to open directory");
        exit(1);
    }
}

int main()
{
    const char *dirname = "."; // Current directory
    const char *substring = "- [ telegram @Myhackersworld2 ]";
    renameFiles(dirname, substring);
    return 0;
}
