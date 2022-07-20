#ifndef JOINTSPACE_H
#define JOINTSPACE_H

#include "FSM/FSMState.h"

class State_JointSpace : public FSMState{
public:
    State_JointSpace(CtrlComponents *ctrlComp);
    ~State_JointSpace(){}
    void enter();
    void run();
    void exit();
    int checkChange(int cmd);
private:
    double _angleStep;
};

#endif  // JOINTSPACE_H