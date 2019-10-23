#include <stdio.h>

void print_a() {
    printf("       A\n");
}

void print_b() {
    printf("      B B\n");
}

void print_c() {
    printf("     C   C\n");    
}

void print_d() {
    printf("    D     D\n");    
}

void print_e() {
    printf("   E       E\n");
}

int main() {

    print_a();
    print_b();
    print_c();
    print_d();
    print_e();
    print_d();
    print_c();
    print_b();
    print_a();


    return 0;

}