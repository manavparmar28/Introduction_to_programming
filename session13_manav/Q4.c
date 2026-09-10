#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    FILE *file;
    char song[100];

    file = fopen("playlist.txt", "r");

    if (file == NULL) {
        printf("File not found!\n");
        return 1;
    }

    printf("Songs containing 'love':\n");

    while (fgets(song, sizeof(song), file) != NULL) {

        // Convert the song name to lowercase
        for (int i = 0; song[i] != '\0'; i++) {
            song[i] = tolower(song[i]);
        }

        // Check whether "love" is present
        if (strstr(song, "love") != NULL) {
            printf("%s", song);
        }
    }

    fclose(file);

    return 0;
}
