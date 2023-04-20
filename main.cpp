
#include "Matrix.h"
#include <iostream>
#include <string.h>

using namespace std;

int main() {
    double **Cnm = zeros(361, 361);
    double **Snm = zeros(361, 361);
    FILE *fid = fopen("egm.txt","r");
    for(int n=0;n<=360;n++){
        for(int m=0;m<=12;m++){
            double temp[6];
            fscanf(fid,"%d%d%lf%lf%lf%lf%lf",&temp[0],&temp[1],&temp[2],&temp[3],&temp[4],&temp[5]);
            Cnm[n+1][m+1] = temp[2];
            Snm[n+1][m+1] = temp[3];
        }
    }
    fclose(fid);
    fid = fopen("eop19620101.txt","r");
    double **eopdata= zeros(13,1000);
    for(int i=0;i<100;i++){
        fscanf(fid,"%i%d%d%i%lf%lf%lf%lf%lf%lf%lf%lf%i",&eopdata[0][i],&eopdata[3][i],&eopdata[4][i],&eopdata[5][i],&eopdata[6][i],&eopdata[7][i],&eopdata[8][i],&eopdata[9][i],&eopdata[10][i],&eopdata[11][i],&eopdata[12][i]);
    }
    fclose(fid);
// read observations
    fid = fopen("GEOS3.txt","r");
    for(int i=0;i<100;i++){
        char tline[55];
        if(fgets(tline,55,fid)==NULL){
            break;
        }
        int Y = stoi(string(tline).substr(0,4));
        int M = stoi(string(tline).substr(5,2));
        int D = stoi(string(tline).substr(8,2));
        int h = stoi(string(tline).substr(12,2));
        int m = stoi(string(tline).substr(15,2));
        double s = stod(string(tline).substr(18,6));
        double az = stod(string(tline).substr(25,8));
        double el = stod(string(tline).substr(35,7));
        double Dist = stod(string(tline).substr(44,10));
// Mostrar por pantalla Y, M, D, h, m, s, az, el, Dist
    }
    fclose(fid);
    return 0;
}