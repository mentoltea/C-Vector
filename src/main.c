#include "vector.h"


int main() {
    float *vec = new_vec(sizeof(float), 0);
    
    float temp;
    for (int i=0; i<21; i++){
        printf("i=%d\t", i);
        temp = i*i - 1;
        vec = vec_add(vec, &temp);
        printf("%f\n", vec[i]);
    }

    delete_vec(vec);
    return 0;
}