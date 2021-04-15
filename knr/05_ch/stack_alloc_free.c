#define BUFFER_SIZE 10000

static char alloc_buff[BUFFER_SIZE];
static char *buff_ptr = alloc_buff;

char *stack_alloc(unsigned size)
{
    if (buff_ptr + size <= alloc_buff + BUFFER_SIZE) {
        buff_ptr += size;
        return buff_ptr - size;
    } else {
        return 0;
    }
}

void stack_free(char *p)
{
    if (p >= alloc_buff && p <= alloc_buff + BUFFER_SIZE)
        buff_ptr = p;
}