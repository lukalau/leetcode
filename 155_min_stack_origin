typedef struct {
    int max_size;
    int cur_size;
    int* data;
} MinStack;

void minStackCreate(MinStack *stack, int maxSize) {
    stack->max_size  = maxSize;
    stack->cur_size  = 0;
}

void minStackPush(MinStack *stack, int element) {
    if ( stack->cur_size < stack->max_size ) {
        stack->data [ stack->cur_size ] = element;
        stack->cur_size += 1;
    }
}

void minStackPop(MinStack *stack) {
    if ( stack->cur_size > 0 ) {
        stack->cur_size -= 1;
    }
}

int minStackTop(MinStack *stack) {
    if ( stack->cur_size > 0 ) {
        return * ( stack->data + stack->cur_size - 1 );
    }
}

int minStackGetMin(MinStack *stack) {
    int cur_min = minStackTop ( stack ) ;
    int temp_size = stack->cur_size;
    while ( temp_size > 0 ) {
        if ( stack->data [ temp_size - 1 ] < cur_min ) {
            cur_min = stack->data [ temp_size - 1 ];
        }
        temp_size -= 1;
    }
    return cur_min;
}

void minStackDestroy(MinStack *stack) {
    while ( stack->cur_size > 0 ) {
        minStackPop ( stack );
    }
}
