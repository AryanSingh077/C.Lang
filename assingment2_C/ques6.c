// // for structurs:

// #include <stdio.h>
// #include <string.h>

// struct LaptopSpecs{
//     char name[100];
//     float displaySize;
//     char processor[100];
//     int memory;
//     char gpu[100];
//     int ssdSize;
//     int wifiVersion;
// };

// int main() {
//     struct LaptopSpecs l1 = {
//         "ASUS TUF A15", 15.6, "RYZEN-7", 16, "RTX-2050", 512, 6
//     };

//     printf("LAPTOP SPECIFICATIONS");
//     printf("Name: %s\n", l1.name);
//     printf("Display Size: %.2f inch\n", l1.displaySize);
//     printf("Processor: %s\n", l1.processor);
//     printf("Memory: %d GB\n", l1.memory);
//     printf("GPU: %s\n", l1.gpu);
//     printf("SSD Size: %d GB\n", l1.ssdSize);
//     printf("Wifi Version: wifi-%d\n", l1.wifiVersion);

//     return 0;
// }

// // now will do structure(by reference):

// #include <stdio.h>
// #include <string.h>

// struct student {
//     char name[100];
//     int roll;
//     float sgpa;
// };

// int main(){
//     struct student s1 = {
//          "Aryan", 24, 9.0
//     };

//     struct student *ptr;
//     ptr = &s1;

//     printf("Name : %s\n", ptr->name);
//     printf("Roll No. : %d\n", ptr->roll);
//     printf("SGPA 1st sem : %.2f\n", ptr->sgpa);
//     return 0;
// }


// now for union:

union data{
    int i;
    float f;
    char str[20];
};

#include <stdio.h>
#include <string.h>

int main(){
    union data d1;
    d1.i = 10;
    d1.f = 5.85;
    strcpy(d1.str, "Introduction to C");

    printf("d1.str = %s", d1.str);
    return 0;
};