
#include "Matrix.h"
#include <iostream>
#include <cstdio>
#include <windows.h>
using namespace std;

int main()
{
    double ** Cnm= zeros(361,361);
    double ** Snm= zeros(361,361);
    char* path = "egm.txt";
    char resolved_path[MAX_PATH];
    GetFullPathName(path, MAX_PATH, resolved_path, nullptr);
    cout << "La ruta absoluta de " << path << " es: " << resolved_path << endl;

    FILE* fid = fopen(resolved_path, "a+");
    if (fid == NULL) {
        cout << "Error al abrir el archivo" << endl;
        return 1;
    }
    for(int n=0; n<=361; n++){
        for(int m=0; m<=n;m++){

        }
    }
    fclose(fid);
    return 0;
}
