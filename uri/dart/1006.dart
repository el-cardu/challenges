import 'dart:io';

void main() {

  double A = double.parse(stdin.readLineSync());
  double B = double.parse(stdin.readLineSync());
  double C = double.parse(stdin.readLineSync());

  double media = (0.2 * A) + (0.3 * B) + (0.5 * C);
  print('MEDIA = ${media.toStringAsFixed(1)}'); 

}