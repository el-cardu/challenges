import 'dart:io';

void main() {
  
  int employeeNumber = int.parse(stdin.readLineSync());
  int workedHours = int.parse(stdin.readLineSync());
  double moneyPerHour = double.parse(stdin.readLineSync());

  double salary = workedHours * moneyPerHour;

  print('NUMBER = $employeeNumber');
  print('SALARY = U\$ ${salary.toStringAsFixed(2)}');

}