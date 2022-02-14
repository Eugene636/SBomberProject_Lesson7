#pragma once

#include <vector>
#include <memory>
#include "LevelGUI.h"
#include "Plane.h"
#include "Bomb.h"
#include "Ground.h"
#include "Tank.h"

class SBomber
{
public:

    SBomber();
    ~SBomber();
    
    bool GetExitFlag() const; //const { return exitFlag; }

    SBomber(const SBomber& other);
    SBomber& operator=(SBomber& other);

    void ProcessKBHit();
    void TimeStart();
    void TimeFinish();

    void DrawFrame();
    void MoveObjects();
    void CheckObjects();

private:
    class SBomberImpl;
    std::unique_ptr<SBomberImpl> pImpl;
};