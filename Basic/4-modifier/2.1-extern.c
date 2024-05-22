# include <stdio.h>

// extern
// extern is short name for external.
// Used when a particular file needs to access a variable from another file.

extern int myExternvar ;

int main() {


printf("%d", myExternvar);

return 0;
}

