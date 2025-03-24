#include <unistd.h>
int main () {
    char c;
    while (read(STDIN_FILENO, &c, 1) == 1 && (c != 'q'));  //in canonical mode, q works only when enter is pressed
    return 0;
}