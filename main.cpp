#include <iostream>
#include <iomanip>
using namespace std;

void imprimir_arreglos(int arr[], const int sz) {
  for (int i = 0; i < sz; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
}

void imprimir_arreglos(std::string arr[], const int sz) {
  for (int i = 0; i < sz; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
}

void imprimir_arreglos(const double* arr, const int sz) {
  for (int i = 0; i < sz; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
}

void ejemplo_arreglo_estaticos() {    // Arreglo Estatico es aquel que se crea en el stack

  // Creacion de arreglos
  int arr_1[4];                   // Crear un arreglo con valores aleatorios
  int arr_2[4]{};                 // Valores Cero
  int arr_3[4]{10, 20, 30, 40};   // Valores especificos (10, 20, 30, 40)
  int arr_4[4] = {1, 2, 3, 4};    // Valores especificos (1, 2, 3, 4)
  int arr_5[4]{10, 20};           // Valores especificos (10, 20, 0, 0)
  // constexpr int arr_6[4]{1, 2, 3, 4, 5, 6};  // Es un ERROR

  // Acceso individual
  std::cout << arr_1[2] << std::endl;   // Aleatorio
  std::cout << arr_2[2] << std::endl;   // 0
  std::cout << arr_3[2] << std::endl;   // 30
  std::cout << arr_4[2] << std::endl;   // 2
  std::cout << arr_5[1] << std::endl;   // 2
  std::cout << "---" << std::endl;
  // Recorrido del arreglo: Acceso individual a todos los elementos de un arreglo
  imprimir_arreglos(arr_1, 4);
  imprimir_arreglos(arr_2, 4);
  imprimir_arreglos(arr_3, 4);
  imprimir_arreglos(arr_4, 4);
  imprimir_arreglos(arr_5, 4);
  // for (const auto &item: arr_1) {
  //   std::cout << item << " ";
  // }
  // std::cout << std::endl;
  // for (const auto &item: arr_2) {
  //   std::cout << item << " ";
  // }
  // std::cout << std::endl;
  // for (const auto &item: arr_3) {
  //   std::cout << item << " ";
  // }
  // std::cout << std::endl;
  // for (const auto &item: arr_4) {
  //   std::cout << item << " ";
  // }
  // std::cout << std::endl;
  // for (const auto &item: arr_5) {
  //   std::cout << item << " ";
  // }
  // std::cout << std::endl;
}

void imprimir_matriz_4cols(int matriz[][4], const int nrows) {
  for (int i = 0; i < nrows; i++) { // Representan las filas
    for (int j = 0; j < 4; j++) { // Representan las columnas
      std::cout << std::setw(4);   // " Dimensiona el elemento que sigue a un tamaño de 3
      std::cout << matriz[i][j] << " ";
    }
    std::cout << std::endl;
  }
}

void ejemplo_matriz_estaticos_2() {
  int matriz_1[4][4]{};   // Valores Aleatorios
  int matriz_2[4][4] = { // cantidad de elementos debe ser menor o igual 4 x 4
    { 1,  2,  3,  4},   // Representa la fila 0
    { 5,  6,  7,  8},
    { 9, 10, 11, 12},
    {13, 14, 15, 16},   // Representa la fila 3
  };
  int matriz_3[2][2] = {1, 2, 3, 4}; // cantidad de elementos debe ser menor o igual 2 x 2

  imprimir_matriz_4cols(matriz_2, 4);
  // for (int i = 0; i < 4; i++) { // Representan las filas
  //   for (int j = 0; j < 4; j++) { // Representan las columnas
  //     std::cout << std::setw(4);   // " Dimensiona el elemento que sigue a un tamaño de 3
  //     std::cout << matriz_2[i][j] << " ";
  //   }
  //   std::cout << std::endl;
  // }
  cout << "---" << std::endl;
  imprimir_matriz_4cols(matriz_1, 4);
}

void ejemplo_arreglo_estaticos_3() {
  int arreglo_1[5] = {1, 2, 3, 4, 5};
  imprimir_arreglos(arreglo_1, 5);
  std::string arreglo_2[6] = {"Jose", "Maria", "John", "Rosa", "Lucas", "Victor"};
  imprimir_arreglos(arreglo_2, 5);
  double arreglo_3[3] = {3.14, 2.71, 1.0};
  imprimir_arreglos(arreglo_3, 3);
}

void ejemplo_punteros_arreglos() {
  int x = 10;
  int *ptr = &x;
  cout << *ptr << endl;     // Sintaxis de dereferencia
  cout << ptr[0] << endl;   // Sintaxis de arreglos

  int arr_1[4] = {10, 20, 30, 40};
  int *ptr_1 = arr_1; // arr_1 es un puntero al primer elemento
  cout << *arr_1 << endl;     // 1
  cout << ptr_1[0] << endl;
  cout << ptr_1[1] << endl;
  *ptr_1 = *ptr_1 + 1;  // 10 + 1 = 11
  cout << *ptr_1 << endl;   // 11
  // Aritmetica de punteros
  ptr_1 = ptr_1 + 1;  // ptr_1[1]
  cout << *ptr_1 << endl;   // 20

  ptr_1 = arr_1;
  int n = 4;
  while (n--) cout << *ptr_1++ << " ";
}



int main(const int argc, char *argv[]) {
  // for (int i = 0; i < argc; i++) {
  //   std::cout << "argumento #" << i << ": " << argv[i] << std::endl;
  // }

  // ejemplo_arreglo_estaticos();
  // ejemplo_matriz_estaticos_2();
  // ejemplo_arreglo_estaticos_3();
  ejemplo_punteros_arreglos();
  return 0;
}