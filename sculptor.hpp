#ifndef SCULPTOR_HPP
#define SCULPTOR_HPP

/**
 * @brief O Struct tipo Voxel é um tipo de dados que esta sendo utlizado para gerar a matriz 3D
 * @details
 * - atributo r do tipo float referece a cor vermalha que vai de 0.00 a 1.00
 * - atributo g do tipo float referece a cor verde que vai de 0.00 a 1.00
 * - atributo b do tipo float referece a cor azul que vai de 0.00 a 1.00
 * - atributo a do tipo float referece a opacidade da cor que vai e 0.00 a 1.00
 * - atibuto isOn do tipo bool referece a capacidade de mostar a cor pode ser verdadeiro ou falso
 */
struct Voxel {
  float r,g,b; // Colors
  float a; // obacidade
            // Transparency
  bool isOn; // Included or not
};

/**
 * @brief A classe Sculptor serve para criar matriz 3D do tipo Voxel
 *
 * @details Dados 3 valores para o construtor a matriz 3D do tipo Voxel é alocada na memoria da maquina
 * e os valores da dimansão da matriz será armazenados e um estado interno nx , ny e nz,
 * a cor da matriz será branco por padrão
 */

class Sculptor
{
protected:
    Voxel*** v; // 3D matriz


    int nx,ny,nz;
    float r,g,b,a;
public:
    /**
     * @brief Sculptor é o construtor da classe e gera uma matriz com as dimensões desejadas
     * @param _nx é a dimensão no eixo x
     * @param _ny é a dimensão no eixo y
     * @param _nz é a dimensão no eixo z
     *
     */

    Sculptor(int _nx, int _ny, int _nz);
    /**
     * @brief ~Sculpor destrutor da classe
     */
    ~Sculptor();
    /**
     * @brief setColor selecionar a cor que será aplicadas nos próximos metodos e a opacidade deles
     * @param r é um float que vária de 0.00 a 1.00 que representa a intensidade da cor vermalha
     * @param g é um float que vária de 0.00 a 1.00 que representa a intensidade da cor verde
     * @param b é um float que vária de 0.00 a 1.00 que representa a intensidade da cor azul
     * @param alpha é um float que vária de 0.00 a 1.00 que representa a opacidade
     *
     */
    void setColor(float r, float g, float b, float alpha);

    /**
     * @brief putVoxel esse método cria um cubo unico nas coordenadas desejadas
     * @param x é um inteiro que representa a coordenada no eixo x
     * @param y é um inteiro que representa a coordenada no eixo y
     * @param z é um inteiro que representa a coordenada no eixo z
     *
     * exemplo:
     *
     *   Sculptor   v(10,10,10);
     *
     *   v.setColor(1,1,1,1);<br/>
     *   v.putVoxel(0,0,0);
     *
     *  <h3>Resultado</h3>
     *  ![putVoxel](putVoxel.png)
     *
     *
     */

    void putVoxel(int x, int y, int z);
    /**
     * @brief cutVoxel esse método remove um cubo unico nas coordenadas desejadas
     * @param x é um inteiro que representa a coordenada no eixo x
     * @param y é um inteiro que representa a coordenada no eixo y
     * @param z é um inteiro que representa a coordenada no eixo z
     *
     *
     *  exemplo:
     *
     *   Sculptor   v(10,10,10);
     *
     *   v.setColor(1,1,1,1);<br/>
     *   v.putVoxel(0,0,0);<br/>
     *   v.setColor(1,0,0,1);<br/>
     *   v.putVoxel(0,0,1);<br/>
     *   v.cutVoxel(0,0,0);<br/>
     *
     *  <h3>Resultado</h3>
     *  ![cutVoxel](cutVoxel.png)
     *
     */
    void cutVoxel(int x, int y, int z);
    /**
     * @brief putBox esse método faz uma área de dimensões desejadas nas coordenadas indicadas, desde que esteja
     * dentro dos limites da matriz 3D.
     * @param x0 é um inteiro que representa o início no eixo x
     * @param x1 é um inteiro que representa o final  no eixo x
     * @param y0 é um inteiro que representa o início no eixo y
     * @param y1 é um inteiro que representa o final  no eixo y
     * @param z0 é um inteiro que representa o início  no eixo z
     * @param z1 é um inteiro que representa o final  no eixo z
     *
     *  exemplo:
     *
     *   Sculptor   v(10,10,10);
     *
     *   v.setColor(1,1,1,1);<br/>
     *   v.putBox(0,3,0,3,0,3);
     *
     *  <h3>Resultado</h3>
     *  ![putBox](putBox.png);
     *
     */
    void putBox(int x0, int x1, int y0, int y1, int z0, int z1);
    /**
     * @brief cutBox esse método remove uma área de dimensões desejadas nas coordenadas indicadas, desde que esteja
     * dentro dos limites da matriz 3D.
     * @param x0 é um inteiro que representa o início no eixo x
     * @param x1 é um inteiro que representa o final  no eixo x
     * @param y0 é um inteiro que representa o início no eixo y
     * @param y1 é um inteiro que representa o final  no eixo y
     * @param z0 é um inteiro que representa o início no eixo z
     * @param z1 é um inteiro que representa o final  no eixo z
     *
     *  exemplo:
     *
     *   Sculptor   v(10,10,10);
     *
     *   v.setColor(1,1,1,1);<br/>
     *   v.putBox(0,3,0,3,0,3);<br/>
     *   v.cutBox(0,2,0,2,0,3);<br/>
     *  <h3>Resultado</h3>
     *  ![cutBox](cutBox.png);
     *
     */
    void cutBox(int x0, int x1, int y0, int y1, int z0, int z1);
    /**
     * @brief putSphere esse método faz uma esfera de raio desejado nas coordenadas indicadas, desde que esteja
     * dentro dos limites da matriz 3D.
     * @param xcenter é um inteiro que é a coordenada do centro da esfera no eixo x
     * @param ycenter é um inteiro que é a coordenada do centro da esfera no eixo y
     * @param zcenter é um inteiro que é a coordenada do centro da esfera no eixo z
     * @param radius é um inteiro que é o raio da esfera
     *
     *
     * exemplo:
     *
     *  Sculptor   v(30,30,30);
     *
     *  v.setColor(1,1,0,1);<br/>
     *  v.putSphere(10,10,10,8);
     *
     * <h3>Resultado</h3>
     * ![putSphere](putSphere.png)
     *
     */
    void putSphere(int xcenter, int ycenter, int zcenter, int radius);
    /**
     * @brief cutSphere esse método remove uma esfera de raio desejado nas coordenadas indicadas, desde que esteja
     * dentro dos limites da matriz 3D.
     * @param xcenter é um inteiro que é a coordenada do centro da esfera no eixo x
     * @param ycenter é um inteiro que é a coordenada do centro da esfera no eixo y
     * @param zcenter é um inteiro que é a coordenada do centro da esfera no eixo z
     * @param radius é um inteiro que é o raio da esfera
     *
     *
     * exemplo:
     *
     *  Sculptor   v(30,30,30);
     *
     *  v.setColor(1,1,0,1);<br/>
     *  v.putSphere(10,10,10,8);<br/>
     *  v.cutSphere(10,10,14,8);<br/>
     *
     * <h3>Resultado</h3>
     *
     * ![cutSphere](cutSphere.png)
     *
     */
    void cutSphere(int xcenter, int ycenter, int zcenter, int radius);
    /**
     * @brief putEllipsoid esse método faz uma elipse de raios desejados nas coordenadas indicadas, desde que esteja
     * dentro dos limites da matriz 3D.
     * @param xcenter  é um inteiro que é a coordenada do centro da elipse no eixo x
     * @param ycenter  é um inteiro que é a coordenada do centro da elipse no eixo x
     * @param zcenter  é um inteiro que é a coordenada do centro da elipse no eixo x
     * @param rx é um inteiro que é o raio da elipse no eixo x
     * @param ry é um inteiro que é o raio da elipse no eixo y
     * @param rz é um inteiro que é o raio da elipse no eixo z
     *
     * exemplo:
     *
     *  Sculptor   v(30,30,30);
     *
     *  v.setColor(1,1,0,1);<br/>
     *  v.putEllipsoid(10,10,10,5,6,10);
     *
     * <h3>Resultado</h3>
     *
     *![putEllipsoid](putEllipsoid.png)
     */
    void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
    /**
     * @brief cutEllipsoid esse método remove uma elipse de raios desejados nas coordenadas indicadas, desde que esteja
     * dentro dos limites da matriz 3D.
     * @param xcenter  é um inteiro que é a coordenada do centro da elipse no eixo x
     * @param ycenter  é um inteiro que é a coordenada do centro da elipse no eixo x
     * @param zcenter  é um inteiro que é a coordenada do centro da elipse no eixo x
     * @param rx é um inteiro que é o raio da elipse no eixo x
     * @param ry é um inteiro que é o raio da elipse no eixo y
     * @param rz é um inteiro que é o raio da elipse no eixo z
     *
     * exemplo:
     *
     *  Sculptor   v(30,30,30);
     *
     *  v.setColor(1,1,0,1);<br/>
     *  v.putEllipsoid(10,10,10,5,6,10);<br/>
     *  v.cutEllipsoid(10,10,15,5,6,10);<br/>
     *
     * <h3>Resultado</h3>
     *
     *![cutEllipsoid](cutEllipsoid.png)
     */
    void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
    /**
     * @brief writeOFF esse método criar um arquivo com a extessão .OFF que serve para vizualizar as esculturas que fazemos.
     * @param filename é um ponteiro pra char que é basicamento o nome do arquivo mais .off
     *
     * exemplo:
     *
     *
     * Sculptor   v(30,30,30);
     *
     *
     * v.setColor(0,1,0,1);<br/>
     * v.putEllipsoid(10,10,10,5,6,10);<br/>
     * v.writeOFF((char*)"elipse.off");<br/>
     *
     * <h3>Resultado</h3>
     *
     * ![writeOFF](writeOFF.png)
     *
     */
    void writeOFF(char* filename);
    /**
     * @brief errorInterval esse método é para mostrar erro de intervalo
     */

    void errorInterval(void);


};

#endif // SCULPTOR_HPP
