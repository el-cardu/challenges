import 'dart:io';

void main() {

  String name = stdin.readLineSync();
  double fixedSalary = double.parse(stdin.readLineSync());
  double sales = double.parse(stdin.readLineSync());

  double salary = fixedSalary + 0.15 * sales;

  print('TOTAL = R\$ ${salary.toStringAsFixed(2)}');

}