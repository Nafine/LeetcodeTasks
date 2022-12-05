#include <algorithm>

int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) 
{
    if ((ax1 <= bx1 && ax2 <= bx1) || (ay1 <= by1 && ay2 <= by2)
        || (bx1 <= ax1 && bx2 <= ax1) || (by1 <= ay1 && by2 <= ay1)
        )
    {
        return (std::abs(ax2 - ax1) * std::abs(ay2 - ay1)) + (std::abs(bx2 - bx1) * std::abs(by2 - by1));
    }

    int xCollision = std::abs(std::max(ax1, bx1) - std::min(ax2, bx2));

    int yCollision = std::abs(std::max(ay1, by1) - std::min(ay2, by2));

    return (std::abs(ax2 - ax1) * std::abs(ay2 - ay1)) + (std::abs(bx2 - bx1) * std::abs(by2 - by1)) - (xCollision * yCollision);

}