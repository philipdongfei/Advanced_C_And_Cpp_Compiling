class Fred {
private:
    int x;
    int y;
public:
    Fred() : x(1), y(2) {}
    Fred(int z) : x(z), y(3) {}
};
Fred theFred;
Fred theOtherFred(55);
