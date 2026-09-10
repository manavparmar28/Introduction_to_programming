#include <stdio.h>

// Function to format follower count
void formatFollowersCount(int count, char result[]) {

    // For 1 million or more followers
    if (count >= 1000000) {
        sprintf(result, "%.1fM", count / 1000000.0);
    }

    // For 1 thousand or more followers
    else if (count >= 1000) {
        sprintf(result, "%.1fK", count / 1000.0);
    }

    // For numbers below 1000
    else {
        sprintf(result, "%d", count);
    }
}

int main() {

    char result[20];

    // Format 1500 followers
    formatFollowersCount(1500, result);
    printf("%s\n", result);

    // Format 1200000 followers
    formatFollowersCount(1200000, result);
    printf("%s\n", result);

    // Format 850 followers
    formatFollowersCount(850, result);
    printf("%s\n", result);

    return 0;
}
