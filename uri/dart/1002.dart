import 'dart:io';
import 'dart:math';

void main() {
  
  double raio = double.parse(stdin.readLineSync());
  double pi = 3.14159;

  double area = pi * pow(raio, 2);

  print('A=${area.toStringAsFixed(4)}');

}