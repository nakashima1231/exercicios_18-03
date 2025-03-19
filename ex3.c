#include <stdio.h>

int main() {
    char resp;
    int a, b, c;
    int hipo, cat;

    printf("quer comparar? [s/n]: ");
    scanf("%c", &resp);

    while (resp == 's') {
        printf("digite o valor a: ");
        scanf("%d", &a);
        printf("digite o valor b: ");
        scanf("%d", &b);
        printf("digite o valor c: ");
        scanf("%d", &c);

        if (a + b > c) {
            if (b + c > a) {
                if (a + c > b) {
                    
                    if (a > b) {
                        if (a > c) {
                            hipo = a * a;
                            cat = b * b + c * c;
                            if (hipo == cat) {
                                printf("é possivel formar um triangulo retangulo\n");
                            } else {
                                printf("nao é possivel formar um triangulo retangulo\n");
                            }
                        }
                    }
                    if (b > a) {
                        if (b > c) {
                            hipo = b * b;
                            cat = a * a + c * c;
                            if (hipo == cat) {
                                printf("é possivel formar um triangulo retangulo\n");
                            } else {
                                printf("nao é possivel formar um triangulo retangulo\n");
                            }
                        }
                    }
                    if (c > a) {
                        if (c > b) {
                            hipo = c * c;
                            cat = a * a + b * b;
                            if (hipo == cat) {
                                printf("é possivel formar um triangulo retangulo\n");
                            } else {
                                printf("nao é possivel formar um triangulo retangulo\n");
                            }
                        }
                    }
                } else {
                    printf("nao é possivel formar um triangulo\n");
                }
            } else {
                printf("nao é possivel formar um triangulo\n");
            }
        } else {
            printf("nao é possivel formar um triangulo\n");
        }
        
        printf("quer comparar? [s/n]: ");
        scanf(" %c", &resp);
    }

    return 0;
}
