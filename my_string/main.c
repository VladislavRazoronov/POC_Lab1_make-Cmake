#include <stdio.h>

typedef struct {
    size_t capacity_m;
    size_t size_m;
    char* data
} my_string_t;

int my_string_t_create(my_string_t* str, size_t buf_size){
    if(!str){
        return -8;
    }
    str->data = malloc(buf_size + 1);
    if( !str->data ){
        return -2;
    }
    str->size_m = 0;
    str->capacity_m = buf_size;
    return 0;
}