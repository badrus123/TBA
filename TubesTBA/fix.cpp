#include <iostream>

using namespace std;

int main()
{
    string inputan;
    string ar[100];
    int i,z,n,j,kb,kt,d,bk,tk;
    getline(cin,inputan);
    z=inputan.length();
    i=0;
    n=0;
    j=0;
    d=0;
    kb=0;
    kt=0;
    bk=0;
    tk=0;

    while(i<z){
        if(inputan[i]=='-'||inputan[i]=='+'){
            if(inputan[i+1]=='0'||inputan[i+1]=='1'||inputan[i+1]=='2'||inputan[i+1]=='3'||inputan[i+1]=='4'||inputan[i+1]=='5'||inputan[i+1]=='6'||inputan[i+1]=='7'||inputan[i+1]=='8'||inputan[i+1]=='9'){
                i++;
            }
            else if(inputan[i]==')'){
                i++;
                ar[n]="kurung tutup";
            }
            else if(inputan[i]=='('){
                    i++;
                    ar[n]="kurung buka";
            }
            else if (!(inputan[i+2]=='0'||inputan[i+2]=='1'||inputan[i+2]=='2'||inputan[i+2]=='3'||inputan[i+2]=='4'||inputan[i+2]=='5'||inputan[i+2]=='6'||inputan[i+2]=='7'||inputan[i+2]=='8'||inputan[i+2]=='9'||inputan[i+2]=='(')){
                        i++;
                        ar[n]="error";
                        break;
                    }
            else if (!(inputan[i-2]=='0'||inputan[i-2]=='1'||inputan[i-2]=='2'||inputan[i-2]=='3'||inputan[i-2]=='4'||inputan[i-2]=='5'||inputan[i-2]=='6'||inputan[i-2]=='7'||inputan[i-2]=='8'||inputan[i-2]=='9'||inputan[i-2]==')')){
                        i++;
                        ar[n]="error";
                        break;
                    }

            else{
                    i++;
                    ar[n]="operator";
            }


        }
        else if (inputan[i]=='0'||inputan[i]=='1'||inputan[i]=='2'||inputan[i]=='3'||inputan[i]=='4'||inputan[i]=='5'||inputan[i]=='6'||inputan[i]=='7'||inputan[i]=='8'||inputan[i]=='9'){
                   if(inputan[i+1]=='-'||inputan[i+1]=='+'){
                        i++;
                        ar[n]="error";
                        break;
                    }
                    if (inputan[i+2]=='0'||inputan[i+2]=='1'||inputan[i+2]=='2'||inputan[i+2]=='3'||inputan[i+2]=='4'||inputan[i+2]=='5'||inputan[i+2]=='6'||inputan[i+2]=='7'||inputan[i+2]=='8'||inputan[i+2]=='9'||inputan[i+2]=='('){
                        i++;
                        ar[n]="error";
                        break;
                    }
              while(inputan[i]!=' ' && inputan[i]!='\0'){
                    if(inputan[i]=='0'||inputan[i]=='1'||inputan[i]=='2'||inputan[i]=='3'||inputan[i]=='4'||inputan[i]=='5'||inputan[i]=='6'||inputan[i]=='7'||inputan[i]=='8'||inputan[i]=='9'||inputan[i]=='E'||inputan[i]=='e'||inputan[i]=='+' || inputan[i] == ','||inputan[i]=='-'){
                        i++;
                        ar[n]="num";
                    }
                     if(inputan[i+1]==','||inputan[i+1]=='E'||inputan[i+1]=='e'){
                        i++;
                        ar[n]="error";
                        break;
                    }
                    else if(inputan[i]=='('){
                            i++;
                           while(j<z){
                                if(inputan[j]=='('){
                                        j++;
                                        kb++;
                                }
                                else if(inputan[j]==')'){
                                        j++;
                                        kt++;
                                }
                                        j++;
                            }
                        if(kb==kt){
                            i++;
                            ar[n]="kurung buka";
                        }
                        else{
                            i++;
                            ar[n]="error";
                            break;

                        }
                }


                    else if(inputan[i]==')'){
                        i++;
                        while(d<z){
                            if(inputan[d]=='('){
                                d++;
                                bk++;
                            }
                            else if(inputan[d]==')'){
                                d++;
                                tk++;
                            }
                            else{
                                d++;
                            }

                        }
                    if(bk==tk){
                        i++;
                        ar[n]="kurung tutup";
                    }
                    else{
                        i++;
                        ar[n]="error";
                        break;
                    }
                }
              }
        }
        else if(inputan[i]=='x'||inputan[i]==':'||inputan[i]=='X'){
            if (!(inputan[i-2]=='0'||inputan[i-2]=='1'||inputan[i-2]=='2'||inputan[i-2]=='3'||inputan[i-2]=='4'||inputan[i-2]=='5'||inputan[i-2]=='6'||inputan[i-2]=='7'||inputan[i-2]=='8'||inputan[i-2]=='9'||inputan[i-2]==')')){
                        i++;
                        ar[n]="error";
                        break;
                    }
            else{
                    ar[n]="operator";
            }
            i++;
        }
        else if(inputan[i]=='('){
                    i++;
                    while(j<z){
                            if(inputan[j]=='('){
                                j++;
                                kb++;
                            }
                            else if(inputan[j]==')'){
                                j++;
                                kt++;
                            }
                            j++;
                    }
                        if(kb==kt){
                            i++;
                            ar[n]="kurung buka";
                        }
                        else{
                            i++;
                            ar[n]="error";
                            break;
                        }
            }

        else if(inputan[i]==')'){
                i++;
                while(d<z){
                    if(inputan[d]=='('){
                        d++;
                        bk++;
                    }
                    else if(inputan[d]==')'){
                        d++;
                        tk++;
                    }
                    else{
                        d++;
                    }

                }
                if(bk==tk){
                    i++;
                    ar[n]="kurung tutup";
                }
                else{
                    i++;
                    ar[n]="error";
                    break;
                }
            }

        else if(inputan[i]==' '){
            i++;
        }

        n++;
    }
    //end perulangan while
    int benar=0;
    for(int a=0;a < i;a++){
        if(ar[a]=="error"){
           benar++;
        }
    }

    //output lexic
    cout<<"Token lexic"<<" : ";
    for(int j=0;j < i;j++){
        cout<<ar[j];
        cout<<"|";
    }
    //output validasi
    if(benar==0){
           cout<<" "<< endl;
        cout<<"valid"<<endl;
    }
    else{
        cout<<" "<< endl;
        cout<<"tidak valid"<<endl;
    }

    return 0;

}
