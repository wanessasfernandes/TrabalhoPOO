#ifndef ELEMENTO_H
#define ELEMENTO_H

class elemento {
public:
    elemento();
    virtual ~elemento();
    int getID();
    virtual void apresentar() = 0;
    
protected:
    int ID;
};

#endif