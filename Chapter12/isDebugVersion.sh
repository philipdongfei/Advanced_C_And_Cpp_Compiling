if
    readelf --debug-dump=line $1 > /dev/null;
then
    echo "$1 is built for debug";
fi
