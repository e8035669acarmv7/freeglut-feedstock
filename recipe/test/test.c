#include <GL/glut.h>

int main()
{
    int glutIsInitialized = glutGet(GLUT_INIT_STATE);
    
    if (!glutIsInitialized) {
        // This is the expected outcome
        return 0;
    } else {
        // In this case something went wrong
        return 1;
    }
}
