#include <stdio.h>
#include <zmq.h>

int main()
{
    int major, minor, patch;
    zmq_version(&major, &minor, &patch);
    printf("ZeroMQ current version: %i.%i.%i\n", major, minor, patch);
}