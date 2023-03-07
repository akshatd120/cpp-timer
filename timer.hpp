#pragma once
#include <chrono>

struct Timer
{
public:
    Timer();
    ~Timer();
    void Stop();
    double getTime();
    void Reset();

private:
    std::chrono::high_resolution_clock::time_point start;
    std::chrono::high_resolution_clock::time_point end;
    double delta;
};
