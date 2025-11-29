#include <stdio.h>

void train() {
    printf("train\n");
    printf("The second feature is added\n");
}

void predict() {
    printf("predict\n");
}

int main() {
    train();
    predict();
    return 0;
}

#include <stdio.h>

void train() {
    printf("train\n");
}

#include <stdio.h>

void train() {
    printf("train\n");
}

void predict() {
    printf("predict\n");
}

void train() {
    printf("train\n");
<<<<<<< HEAD
    printf("The first feature is added\n");
=======
    printf("The second feature is added\n");
>>>>>>> secondfeature
}