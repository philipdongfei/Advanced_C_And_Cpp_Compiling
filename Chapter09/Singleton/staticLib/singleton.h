#pragma once

class Singleton
{
public:
    static Singleton& GetInstance(void);

public:
    ~Singleton(){};
    int DoSomething(void);

private:
    Singleton(){};
    Singleton(Singleton const &);  // purposefully not implemented
    void operator=(Singleton const&); // purposefully not implemented

private:
    static Singleton* m_pInstance;

};


