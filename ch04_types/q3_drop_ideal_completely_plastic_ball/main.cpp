#include <iostream>

/* Extra credit: This one is a little more challenging.

Write a short program to simulate a ball being dropped off of a tower.
To start, the user should be asked for the height of the tower in meters.
Assume normal gravity (9.
m/s2), and that the ball has no initial velocity (the ball is not moving to start).
Have the program output the height of the ball above the ground after 0, 1, 2, 3, 4, and 5 seconds.
The ball should not go underneath the ground (height 0).

Use a function to calculate the height of the ball after x seconds.
The function can calculate how far the ball has fallen after x seconds using the following formula: distance fallen = gravity_constant * x_seconds2 / 2

Expected output: */

/* My notes because I'm an engineer and I can't blatantly ignore physics
Neglect: air resistance, non constant gravitational acceleration if starting height is giant
Assume: Perfectly plastic ball that dissipates all energy into heat/sound/physical-deformation (does not bounce) */

double getDoubleFromCin()
{
    double value{};
    while (true)
    {
        std::cout << "Enter the height of the tower (m): ";
        if (std::cin >> value)
        {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return value;
        }
        else
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
}

bool getPositionAtTime(double height, double time, double acceleration)
{
    height -= time * time * acceleration / 2.0;
    if (height <= 0)
    {
        std::cout << "At " << time << " seconds, the ball is on the ground.\n";
        return false;
    }
    else
    {
        std::cout << "At " << time << " seconds, the ball is at height " << height << " meters.\n";
    }
    return true;
}

int main()
{
    double height{getDoubleFromCin()};
    const double g{9.8};

    // position at 0 sec
    if (!getPositionAtTime(height, 0.0, g))
        return 0;
    // position at 1 sec
    if (!getPositionAtTime(height, 1.0, g))
        return 0;
    // position at 2 sec
    if (!getPositionAtTime(height, 2.0, g))
        return 0;
    // position at 3 sec
    if (!getPositionAtTime(height, 3.0, g))
        return 0;
    // position at 4 sec
    if (!getPositionAtTime(height, 4.0, g))
        return 0;
    // position at 5 sec
    if (!getPositionAtTime(height, 5.0, g))
        return 0;

    return 0;
}
