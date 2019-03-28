#ifndef OBSERVER_H_INCLUDED
#define OBSERVER_H_INCLUDED

using namespace std;

class Observer;

class Subject
{
    friend class Observer;

protected:
    int Count;
    Observer *List[100];
    void AddObserver(Observer *Item);
    void RemoverObserver(Observer *Item);

public:
    Subject() {Count = 0;}
    void Event();
};

class Observer
{
protected:
    Subject *subj;

public:
    virtual void Respond() = 0;
    Observer (Subject *asubj)
    {
        subj = asubj;
        subj->AddObserver(this);
    }

    virtual ~Observer() { subj->RemoverObserver(this); }
};

class Dog : public Observer
{
protected:
    string name;

public:

    Dog(Subject *asubj, string myname) : Observer(asubj)
    {
        name = myname;
    }

    void Respond();
};

class Police : public Observer
{
protected:
    string name;

public:
    Police(Subject *asubj, string myname) : Observer(asubj)
    {
            name = myname;
    }

    void Respond();
};

#endif // OBSERVER_H_INCLUDED
