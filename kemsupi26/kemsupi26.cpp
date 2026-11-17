/******************************************
 * Автор: Мыльников Александр             *
 * Название: Структуры и работа с файлами *
 * Вариант: 17                            *
 *****************************************/

#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <string>

using namespace std;

struct sRoute {
  int route;
  string firstFinalStopName;
  string secondFinalStopName;
  double routeDuration;
  double countOfBusses;
};

int main() {
  int routeCount, criteria, routeWithMaxBusses;
  double maxCountOfBusses = -1;

  cout << "Input count of routes: ";
  cin >> routeCount;

  cout << "Input the number to be compared with the number of buses: ";
  cin >> criteria;

  vector <sRoute> routes (routeCount);

  ifstream fin("Routes.txt");

  if (fin.is_open() == 0) {
    cerr << "Error of Open\n";
  } else {
    for (int routeIndex = 0; routeIndex < routeCount; ++routeIndex) {
      fin >> routes[routeIndex].route >> routes[routeIndex].firstFinalStopName >> routes[routeIndex].secondFinalStopName
        >> routes[routeIndex].routeDuration >> routes[routeIndex].countOfBusses;

      if (routes[routeIndex].countOfBusses < criteria) {
        printf("Route: %d; First final stop: %s; Second final stop: %s; Route duration: %.0f; Count of busses: %.0f; Average bus service interval: %.2f\n", routes[routeIndex].route, 
          routes[routeIndex].firstFinalStopName.c_str(), routes[routeIndex].secondFinalStopName.c_str(), routes[routeIndex].routeDuration, routes[routeIndex].countOfBusses,
          routes[routeIndex].routeDuration / routes[routeIndex].countOfBusses);
      }

      if (routes[routeIndex].countOfBusses > maxCountOfBusses) {
        maxCountOfBusses = routes[routeIndex].countOfBusses;
        routeWithMaxBusses = routes[routeIndex].route;
      }
    }
    fin.close();
  }

  printf("The route with the highest number of buses is %d. It has %.0f busses", routeWithMaxBusses, maxCountOfBusses);

  return 0;
}
