#include<bits/stdc++.h> 

using namespace std;

int main (){
    int A1=10;
    int *p;
    p=&A1;
    cout<<p;
    cout<<"majoo";

}
/* PARA COMENTAR ES ALT+SHIFT+A */
/* 1:PARA CREAR EL REPOSITORIO, CREO LA EL ARCHIVO EN VISUAL Y ABRO LA TERMINAL DESDE EL PROGRAMA PARA QUE SE ABRA CON EL PATH 
    DE DONDE ESTOY */
/* 2: USO EL COMANDO GIT INIT PARA INICIALIZAR EL REPOSITORIO */
/* 3: ANTES DE HACER CADA COMMIT TENGO QUE HACER GIT ADD * (CUANDO QUIERO SEÑALAR TODOS LOS CAMBIOS) O GIT ADD NOMBREDELARCHIVO  */
/* 4: PARA GUARDAR LO QUE SELECCIONÉ USO EL GIT COMMIT Y PARA PONER EL MENSAJE DEL COMMIT SE USA -M EJ: GIT COMMIT -M "PRIMERA PERUBA" */
/* 5: PARA VER LOS COMMITS QUE HE HECHO SE USA GIT LOG --ONELINE, APARECERAN EN LISTA TODOS LOS COMMITS */
/* 6: PARA VOLVER A UN COMMIT ANTERIOR, USO EL COMANDO GIT CHECKOUT CODIGO_HEXADECIMAL_DE_LA_RAMA. EJ: git checkout 6b31bf8 */
/* 7: SI QUIERO VOLVER A VER TODOS LOS COMMITS DE LA RAMA MASTER USO EL COMANDO GIT CHECKOUT MASTER */
/* 8: PARA CREAR UN LUGAR DONDE SE PUEDA GUARDAR UNA DIRECCION DE REPOSTIRORIOS REMOTOS USO EL COMANDO GIT REMOTE ADD NOMBRE_DE_LA_DIRECCION DIRECCION
    EJ: git remote add origin https://github.com/majogomezg/PruebasGit.git   */
/* 9: PARA CAMBIAR EL NOMBRE DE LA RAMA EN LA QUE ESTAMOS TRABAJANDO SE USA EL COMANDO GIT BRANCH -M NUEVO_NOMBRE*/
/* 10: PARA SUBIR LO QUE TENGO EN MI REPOSITORIO LOCAL A EL REPOSITORIO REMOTO USO EL COMANDO GIT PUSH -U NOMBRE_REPO NOMBRE_RAMA
    EJ:git push -u origin segunda  */