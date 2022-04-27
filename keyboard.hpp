#ifndef _KEYBOARD_H_
#define _KEYBOARD_H_

#include "commons.hpp"
#include "receiver.hpp"
#include "key.hpp"
#include "cpu.hpp"

#include <string.h>

class Keyboard: public Receiver{
private:
    int keyCount;
    Key *keys[24];
    bool wasPressed[24];

    //void print();
    Cpu *cpu;
    bool build();

public:
    Keyboard();
    ~Keyboard();

    void setCpu(Cpu *cpu);

    void addKey(Key *key);

    void receiveDigit(Digit d);
    void receiveOperation(Operation op);
    void receiveControl(Control ctrl);

    friend class Calculator;
};

#endif