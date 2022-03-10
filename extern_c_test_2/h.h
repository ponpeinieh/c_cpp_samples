extern "C" void f(int); // one way
extern "C" {    // another way
    void g(double);
    void h();
};

/*
void f(int); 
void g(double);
void h();
*/