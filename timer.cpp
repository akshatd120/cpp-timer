#include "timer.hpp"
typedef std::chrono::high_resolution_clock Clock;
typedef std::chrono::duration<double> Duration;
typedef std::chrono::nanoseconds ns;

Timer::Timer() { start = Clock::now(); }
Timer::~Timer(){};

double Timer::getTime(/*Tell time elapsed till this command*/)
{
    end = Clock::now();
    Duration dur = end - start;
    delta = std::chrono::duration_cast<ns>(dur).count();
    return delta;
}
void Timer::Reset() { start = Clock::now(); }
