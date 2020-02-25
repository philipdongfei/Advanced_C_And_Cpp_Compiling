gcc -Wall -fPIC -c scriptVisibilityControl.c
gcc -shared scriptVisibilityControl.o \
    -Wl,--version-script,exportControlScript.map \
    -o libscriptcontrolsexportdemo.so

