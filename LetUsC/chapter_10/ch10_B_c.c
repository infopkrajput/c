/* There are three pegs labeled A,B and C. Four disks are placed on peg A. The bottom-most disk is  */
#include <stdio.h>

void towerOfHanoi(int n, char from_peg, char to_peg, char aux_peg) {
    if (n == 1) {
        printf("Move disk 1 from peg %c to peg %c\n", from_peg, to_peg);
        return;
    }
    towerOfHanoi(n - 1, from_peg, aux_peg, to_peg);
    printf("Move disk %d from peg %c to peg %c\n", n, from_peg, to_peg);
    towerOfHanoi(n - 1, aux_peg, to_peg, from_peg);
}

int main() {
    int num_disks = 4; // Number of disks
    towerOfHanoi(num_disks, 'A', 'C', 'B'); // A, B, and C are the pegs
    return 0;
}
