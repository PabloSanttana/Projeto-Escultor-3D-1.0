#include <iostream>
#include "sculptor.hpp"
#include <math.h>

using namespace std;




int main()
{
    Sculptor   v(80,100,80);


    /*
    // melacia
    v.setColor(0,1,0,1);
    v.putEllipsoid(25,25,25,10,14,20);

    v.setColor(1,0,0,1);
    v.putEllipsoid(25,25,25,7,12,17);

    v.setColor(0,0,0,1);
    for( int i=18 ;i<32;i++){
        for( int j=13 ;j<37;j++){
            for( int k=9 ;k<42;k++){
                float positionX,positionY,positionZ;
                float result;


                            positionX = (i - 25);
                            positionY = (j - 25);
                            positionZ = (k - 25);

                            result = (pow(positionX,2))/pow(7,2) + (pow(positionY,2))/pow(12,2) + (pow(positionZ,2))/pow(17,2);


                if(result <= 1){
                   if( k%2 == 0 && j%2 ==0 && i%2 ==0){

                     v.putVoxel(i,j,k);
                   }
                }

            }
        }
    }

    v.cutBox(0,25,0,25,0,50);
    v.writeOFF((char*)"melacia.off");
    */



/*
    // notebool inicio
    v.setColor(0.75,0.75,0.75,1);
    v.putBox(10,70,0,40,0,40);


    v.setColor(0,0,0,0.8);
    v.putBox(13,67,6,37,1,1);
    v.putVoxel(40,39,1);

    v.cutBox(10,70,0,2,0,1);

    v.putBox(18,20,1,3,1,2);
    v.putBox(60,62,1,3,1,2);
    v.cutBox(10,70,2,40,2,40);

    v.putBox(13,67,1,1,6,33);

    v.setColor(0.75,0.75,0.75,1);
    v.putBox(13,67,1,1,7,8);

    for(int i =0; i<50;){

        v.putVoxel(15+i,1,6);
        i=i+3;
    }

     v.putBox(13,67,1,1,11,11);
     v.putBox(13,67,1,1,14,14);
     v.putBox(13,67,1,1,17,17);
     v.putBox(13,67,1,1,20,20);
     v.putBox(13,67,1,1,23,23);
     v.putBox(13,67,1,1,26,26);
     v.putBox(13,67,1,1,26,40);

      v.setColor(0.35,0.35,0.35,1);
     v.putBox(32,48,1,1,30,36);

     v.setColor(0.75,0.75,0.75,1);
     for(int i =0; i<50;){

         v.putBox(15+i,15+i,1,1,9,10);
         i=i+3;
     }
     for(int i =0; i<50;){

          v.putBox(16+i,16+i,1,1,12,13);
         i=i+3;
     }
     for(int i =0; i<50;){

          v.putBox(17+i,17+i,1,1,15,16);
         i=i+3;
     }
     for(int i =0; i<50;){
        v.putBox(15+i,15+i,1,1,18,19);
         i=i+3;
     }
     for(int i =0; i<50;){
         v.putBox(16+i,16+i,1,1,21,22);
         i=i+3;
     }
     for(int i =0; i<50;){
        v.putBox(17+i,17+i,1,1,24,25);
         i=i+3;
     }

     v.putBox(30,49,1,1,24,25);
     v.setColor(0,0,0,1);

      v.putBox(31,49,1,1,24,25);




    v.writeOFF((char*)"notebook.off");
   */

/*
    // bob Esponja

    v.setColor(0.78,0.37,0.22,1);
    v.putBox(20,61,40,51,10,26);

    v.setColor(0.95,0.9,0.12,1);
    v.putBox(19,62,50,91,9,27);

    // sinto
     v.setColor(0,0,0,1);
     v.putBox(23,30,43,45,10,26);
     v.putBox(33,47,43,45,10,26);
     v.putBox(50,58,43,45,10,26);

    // sinto lateral

    v.putBox(20,61,43,45,13,23);

    // cor branca bermuda
     v.setColor(1,1,1,1);
     v.putBox(20,61,46,51,10,26);
     v.putBox(31,37,49,50,26,27);
     v.putBox(32,36,48,49,26,27);
     v.putBox(33,35,47,48,26,27);

     v.putBox(44,51,49,50,26,27);
      v.putBox(45,50,48,49,26,27);
      v.putBox(46,49,47,48,26,27);

     v.setColor(0,0,0,1);
     for(int i=49, a=0; i>=46;i--,a++){
         v.putVoxel(30+a,i,26);
     }
     for(int i=46, a=4; i<=49;i++,a++){
         v.putVoxel(30+a,i,26);
     }
     for(int i=49, a=0; i>=46;i--,a--){
         v.putVoxel(50+a,i,26);
     }
     for(int i=49, a=0; i>=46;i--,a++){
         v.putVoxel(43+a,i,26);
     }

     // gravata


    v.setColor(1,0.25,0.25,1);
    v.putBox(38,43,49,50,26,27);
     v.setColor(0,0,0,1);
    v.putBox(38,43,48,49,26,27);
     v.setColor(1,0.25,0.25,1);
    v.putBox(39,42,48,49,26,27);
    v.setColor(0,0,0,1);
    v.putBox(39,42,47,48,26,27);
    v.putBox(38,43,46,47,26,27);
    v.setColor(1,0.25,0.25,1);
    v.putBox(39,42,46,47,26,27);
    v.setColor(0,0,0,1);
    v.putBox(37,44,45,46,26,27);
    v.setColor(1,0.25,0.25,1);
    v.putBox(38,43,45,46,26,27);
    v.setColor(0,0,0,1);
    v.putBox(36,45,44,45,26,27);
    v.setColor(1,0.25,0.25,1);
    v.putBox(37,44,44,45,26,27);
    v.setColor(0,0,0,1);
    v.putBox(37,44,43,44,26,27);
    v.setColor(1,0.25,0.25,1);
    v.putBox(38,43,43,44,26,27);
    v.setColor(0,0,0,1);
    v.putBox(38,43,42,43,26,27);
    v.setColor(1,0.25,0.25,1);
    v.putBox(39,42,42,43,26,27);
    v.setColor(0,0,0,1);
    v.putBox(39,42,41,42,26,27);
    v.setColor(1,0.25,0.25,1);
    v.putBox(40,41,41,42,26,27);
    v.setColor(0,0,0,1);
    v.putVoxel(40,40,26);
    //






    // boca
     v.setColor(0,0,0,1);

     v.putBox(29,52,64,65,26,27);
     v.putBox(29,52,63,64,26,27);
     v.putBox(29,52,62,63,26,27);
     v.putBox(29,52,61,62,26,27);
     v.putBox(29,52,60,61,26,27);
     v.putBox(30,51,59,60,26,27);
     v.putBox(31,50,58,59,26,27);
     v.putBox(32,49,57,58,26,27);
     v.putBox(33,48,56,57,26,27);
     v.putBox(34,47,55,56,26,27);

     v.setColor(0.95,0.9,0.12,1);
     v.putBox(30,51,65,66,26,27);
     v.putBox(30,51,64,65,26,27);
     v.putBox(30,51,63,64,26,27);
     v.putBox(30,51,62,63,26,27);
     v.putBox(30,51,61,62,26,27);
     v.putBox(30,51,60,61,26,27);
     v.putBox(31,50,59,60,26,27);
     v.putBox(32,49,58,59,26,27);
     v.putBox(33,48,57,58,26,27);
     v.putBox(34,47,56,57,26,27);


     // dentes
     v.setColor(0,0,0,1);
     v.putBox(35,40,51,56,26,27);
     v.putBox(41,46,51,56,26,27);
     v.setColor(1,1,1,1);
     v.putBox(36,39,52,55,26,27);
     v.putBox(42,45,52,55,26,27);


    //bochechas

     v.setColor(1,0.25,0.25,1);
     v.putVoxel(27,65,26);
     v.putVoxel(27,66,26);

     v.putVoxel(31,65,26);
     v.putVoxel(31,66,26);

     v.putBox(28,31,67,68,26,27);


     v.putVoxel(49,65,26);
     v.putVoxel(49,66,26);

     v.putVoxel(53,65,26);
     v.putVoxel(53,66,26);
     v.putBox(50,53,67,68,26,27);


    // mangas
     v.setColor(1,1,1,1);
     v.putEllipsoid(66,55,19,5,4,4);
     v.cutEllipsoid(68,55,19,4,3,3);
     v.cutBox(67,79,40,71,10,41);

     v.putEllipsoid(14,55,19,5,4,4);
     v.cutEllipsoid(12,55,19,4,3,3);
     v.cutBox(0,14,40,71,10,41);


     //braços
     v.setColor(0.95,0.9,0.12,1);
     v.putBox(8,15,54,57,18,21);
     v.putBox(3,9,53,58,18,21);
     v.putBox(6,8,57,61,18,21);

     v.putBox(66,72,54,57,18,21);
     v.putBox(71,77,53,58,18,21);
     v.putBox(72,74,57,61,18,21);


    //
    v.cutBox(20,61,81,82,28,61);


    v.setColor(0.78,0.37,0.22,1);


    v.putBox(27,34,35,41,14,22);
    v.cutBox(28,33,35,39,15,21);

    v.putBox(46,53,35,41,14,22);
    v.cutBox(47,52,35,39,15,21);



   // pernas
   v.setColor(0.95,0.9,0.12,1);
   v.putBox(29,32,30,41,17,20);
   v.putBox(48,51,30,41,17,20);

    v.setColor(1,1,1,1);
    v.putBox(29,32,20,31,17,20);
    v.putBox(48,51,20,31,17,20);

    // listra azul
     v.setColor(0.15,0.45,0.7,1);
     v.putBox(29,32,27,28,17,20);
     v.putBox(48,51,27,28,17,20);
   //listra vermelha
     v.setColor(0.9,0.2,0.2,1);
     v.putBox(29,32,25,26,17,20);
     v.putBox(48,51,25,26,17,20);

     // sapato 1
     v.setColor(0,0,0,1);
     v.putSphere(30,18,28,5);
     v.putBox(28,33,15,21,16,26);
     v.cutBox(28,33,15,17,19,20);
     v.cutBox(28,33,15,16,20,21);
     v.cutBox(26,34,0,15,20,41);
     v.cutBox(20,27,0,29,20,41);
     v.cutBox(34,36,0,29,20,41);

     // sapato 2
        v.setColor(0,0,0,1);
        v.putSphere(49,18,28,5);
        v.putBox(47,52,15,21,16,26);
        v.cutBox(47,52,15,17,19,20);
        v.cutBox(47,52,15,16,20,21);
        v.cutBox(45,53,0,15,20,41);
        v.cutBox(43,46,0,29,20,41);
        v.cutBox(53,61,0,29,20,41);


    // manchas top
        v.setColor(0.68,0.63,0.17,1);
        v.putSphere(40,91,17,4);
        v.putSphere(30,91,15,2);
        v.putSphere(30,91,23,5);
        v.putSphere(50,91,19,3);
        v.putSphere(40,91,17,4);
        v.putSphere(20,91,20,4);
        v.putSphere(59,91,14,4);
        v.cutBox(0,71,91,99,0,31);
    // manchas costa
        v.putSphere(25,55,8,4);
        v.putSphere(40,55,8,5);
        v.putSphere(53,56,8,6);

        v.putSphere(29,67,8,6);
        v.putSphere(45,65,8,4);
        v.putSphere(57,69,8,5);

        v.putSphere(23,80,8,6);
        v.putSphere(40,78,8,4);
        v.putSphere(50,84,8,5);
        v.cutBox(0,71,0,99,0,9);
    // manchas lateral

        v.putSphere(20,65,17,5);
        v.putSphere(20,78,20,4);
        v.cutBox(0,19,61,99,0,51);


        v.putSphere(60,65,17,5);
        v.putSphere(60,78,20,4);
        v.cutBox(62,79,61,99,0,51);


      //machas frente

        v.putSphere(24,85,26,3);
        v.putSphere(54,85,26,3);
        v.putSphere(40,87,26,3);
        v.putSphere(23,67,26,3);
        v.putSphere(25,54,26,3);
        v.putSphere(57,67,26,3);
        v.putSphere(55,54,27,4);
        v.cutBox(0,79,50,99,27,51);


        // olhos
        v.setColor(0,0,0,1);
        v.putSphere(33,75, 25,7);
        v.putSphere(47,75, 25,7);
        v.setColor(1,1,1,1);
        v.putSphere(33,75, 25,6);
        v.putSphere(47,75, 25,6);
        v.setColor(0.30,0.7,0.87,1);
        v.putSphere(33,75, 25,4);
        v.putSphere(47,75, 25,4);
        v.setColor(0,0,0,1);
        v.putSphere(33,75, 25,2);
        v.putSphere(47,75, 25,2);
        v.cutBox(20,61,50,81,27,61);

        //silios
        v.setColor(0,0,0,1);
        v.putVoxel(31,82,28);
        v.putVoxel(31,83,29);
        v.putVoxel(33,82,28);
        v.putVoxel(33,83,29);
        v.putVoxel(35,82,28);
        v.putVoxel(35,83,29);

        v.putVoxel(45,82,28);
        v.putVoxel(45,83,29);
        v.putVoxel(47,82,28);
        v.putVoxel(47,83,29);
        v.putVoxel(49,82,28);
        v.putVoxel(49,83,29);

        // nariz
        v.setColor(0.95,0.9,0.12,1);
        v.putSphere(40,67, 26,1);
        v.putSphere(40,67, 27,1);
        v.putSphere(40,67, 28,1);
        v.putSphere(40,67, 29,1);
        v.putSphere(40,67, 30,1);
        v.putSphere(40,67, 31,1);
        v.putSphere(40,67, 32,1);




    v.writeOFF((char*)"bobEsponja.off");
*/


       v.setColor(0,1,0,1);
       v.putEllipsoid(10,10,10,5,6,10);
       v.putBox(0,5,0,4,0,3);
       v.writeOFF((char*)"teste00.off");

    cout << "Finalizado!"<< endl;
    return 0;
}
