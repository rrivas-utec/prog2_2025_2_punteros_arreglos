#include <iostream>
#include <iomanip>

void imprimir_arreglos(int arr[], const int sz) {
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

void ejemplo_arreglo_estaticos_2() {
  int matriz_1[4][4];   // Valores Aleatorios
  int matriz_2[4][4] = {
    { 1,  2,  3,  4},
    { 5,  6,  7,  8},
    { 9, 10, 11, 12},
    {13, 14, 15, 16},
  };
  int matriz_3[2][2] = {1, 2, 3, 4};

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      std::cout << std::setw(4);   // " Dimensiona el elemento que sigue a un tamaño de 3
      std::cout << matriz_2[i][j];
    }
    std::cout << std::endl;
  }
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      std::cout << std::setw(4) << matriz_3[i][j] << " ";
    }
    std::cout << std::endl;
  }
}

int main(const int argc, char *argv[]) {
  // for (int i = 0; i < argc; i++) {
  //   std::cout << "argumento #" << i << ": " << argv[i] << std::endl;
  // }

  ejemplo_arreglo_estaticos();
  // ejemplo_arreglo_estaticos_2();
  return 0;
}