#include <stdlib.h>
#include <stdio.h>
#include <dlfcn.h>


typedef void (*PPRINTMSG_FUNC)(void);

int main(int argc, char **argv)
{
    void *pHandle;

    pHandle = dlopen("./libcontrolledvisibility.so", RTLD_LAZY);
    if (NULL == pHandle){
        fprintf(stderr, "%s\n", dlerror());
        return -1;
    }
    PPRINTMSG_FUNC pPrintMsg = (PPRINTMSG_FUNC)dlsym(pHandle, "printMessage");
    if (NULL == pPrintMsg){
        fprintf(stderr, "%s\n", dlerror());
        dlclose(pHandle);
        pHandle = NULL;
        return -1;
    }
    pPrintMsg();
    dlclose(pHandle);
    pHandle = NULL;
    return 0;


}

