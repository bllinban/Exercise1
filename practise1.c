#include <stdio.h>

int main() {
    double t1, t2, t3;
    
    // Додаємо вхідні дані
    printf("Введіть часи t1, t2, t3 через пробіл: ");
    scanf("%lf %lf %lf", &t1, &t2, &t3);
    
    // Обраховуємо загальний час
    double total_time = t1 + t2 +t3 ;
    
    // Обраховуємо скільки годин витрачають на з'їдання пирога
    double total_hours = total_time / 3;
    
    // Виведимо результат з округленням до 2 знаків після коми
    printf("Загальний час: %.2lf годин\n", total_hours);
    
    return 0;
}