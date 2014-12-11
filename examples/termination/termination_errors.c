void foo()
    //@ requires true;
    //@ ensures true;
    //@ terminates;
{
    foo(); //~ should_fail
}

void bar()
    //@ requires true;
    //@ ensures true;
    //@ terminates;
{
    baz(); //~ should_fail
}

void baz()
    //@ requires true;
    //@ ensures true;
    //@ terminates;
{
    bar();
}

void fob()
    //@ requires true;
    //@ ensures true;
    //@ terminates;
{
    for (;;) //~ should_fail
        //@ invariant true;
    {
    }
}

typedef void func();
    //@ requires true;
    //@ ensures true;

void some_func() //@ : func
    //@ requires true;
    //@ ensures true;
    //@ terminates;
{
    func *f = some_func;
    f(); //~ should_fail
}