import 'dart:io';

void main() {

  double A = double.parse(stdin.readLineSync());
  double B = double.parse(stdin.readLineSync());

  double media = (0.35*A + 0.75*B)/1.10;
  print('MEDIA = ${media.toStringAsFixed(5)}');

}