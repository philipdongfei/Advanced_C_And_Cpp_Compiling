ls -alg
mv libshlib.so.1.0.0 purposefullyChangeName
ls -alg
ldconfig -l purposefullyChangeName
ls -alg

