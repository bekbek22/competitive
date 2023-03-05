#include "testlib.h"

int main(int argc, char** argv) {
    registerValidation(argc, argv);

    // Read the first line containing a single integer with 10 digits
    inf.readToken("[0-9]{1,10}", "x");
    inf.readEoln();

    // Read the second line containing a single integer N satisfying 1 <= N <= 10
    int n = inf.readInt(1, 10, "n");
    inf.readEoln();

    for (int i = 0; i < n; i++) {
        setTestCase(i + 1);
        inf.readToken("[a-zA-Z]{1,100}", format("s[%d]", i));
        inf.readEoln();
    }

    inf.readEof();

    return 0;
}
