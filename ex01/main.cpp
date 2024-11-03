#include "Zombie.hpp"

int main(void) {
    int N = 3;

    std::cout << "============= Zombies on the Heap =============" << std::endl;
    Zombie* horde1 = zombieHorde(N, "Infantry");
    for (int i = 0; i < N; i++)
        horde1[i].announce();
    delete[] horde1;

    return 0;
}