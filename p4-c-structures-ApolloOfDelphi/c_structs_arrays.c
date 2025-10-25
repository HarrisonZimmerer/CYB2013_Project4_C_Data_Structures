#include <stdio.h>
#include <string.h>

struct CVE {
    float cvss;
    char cveid[16];
    char description[101];
};

struct CVE create_cve(float my_cvss, char *my_cveid, char *my_desc) {
    // TODO: create a CVE struct and return it
    struct CVE new_cve;
    new_cve.cvss = my_cvss;
    //errors
    if (strlen(my_cveid) < 16) {
        strncpy(new_cve.cveid, my_cveid, 16);
    } 
    
    else {
        strncpy(new_cve.cveid, my_cveid, 15);
        new_cve.cveid[15] = '\0';
        printf("CVE ID is too long\n");
    }    
    if (strlen(my_desc) < 101) {
        strncpy(new_cve.description, my_desc, 101);
    } 
    else {
        strncpy(new_cve.description, my_desc, 100); 
        new_cve.description[100] = '\0';
        printf("CVE Description is too long\n");
    }    return new_cve;
}

void print_cve(struct CVE cve) {
    // TODO: print out the CVE information
    printf("CVE ID: %s\n", cve.cveid);
    printf("CVSS Severity: %f\n", cve.cvss);
    printf("CVE Description: %s\n", cve.description);
}

int *inc_arr(int *arr, int arr_size, int increment) {
    // TODO: create a function inc_array() that increments all values of the the array by a constant amount supplied by argument.
    for (int i = 0; i < arr_size; i++) {

        arr[i] += increment;
    
    }
}

int main() {

    // print the values and addresses of the array after initializaion, and again after the values have been updated.   
    // create an array called var initialized with values 10,20,30,40,50.
    int var[5] = {10, 20, 30, 40, 50};
    // create a separate pointer array to the address locations of this array.
    int *pointers[5];    for (int i = 0; i < 5; i++) {
        pointers[i] = &var[i];
    }    printf("Initial values:\n");

    for (int i = 0; i < 5; i++) {
        printf("Values: %d, Memory Address: %p\n", var[i], (void *)pointers[i]);
    }
 // call the inc_arr function to increase the array elements by 8
    inc_arr(var, 5, 8);
    // print out the address and values of the array after initialization
    printf("After increasing each element by 8:\n");
    // print out the values of the array after incrementing
    for (int i = 0; i < 5; i++) {
        printf("Values of var[%d]: = %d\n", i, var[i]);
    }
    // make the CVE, pulled from https://nvd.nist.gov/vuln/detail/CVE-2022-27255
    struct CVE ex_cve1;
    char idnum1[] = "CVE-2022-27255";
    char desc1[] = "In Realtek eCos RSDK 1.5.7p1 and MSDK 4.9.4p1, the SIP ALG function that rewrites SDP data has a sta";
    ex_cve1 = create_cve(9.8, idnum1, desc1);
    print_cve(ex_cve1);

    // make the CVE but too long ID and description, pulled from https://nvd.nist.gov/vuln/detail/CVE-2022-27255
    struct CVE ex_cve2;
    char idnum2[] = "CVE-2022-27255NIST";
    char desc2[] = "In Realtek eCos RSDK 1.5.7p1 and MSDK 4.9.4p1, the SIP ALG function that rewrites SDP data has a stack-based buffer overflow. This allows an attacker to remotely execute code without authentication via a crafted SIP packet that contains malicious SDP data.\n";
    ex_cve2 = create_cve(9.8, idnum2, desc2);
    print_cve(ex_cve2);

    return 0;
}