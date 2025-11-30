#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

// دالة مساعدة لحساب مجموع خانات الرقم
// تأخذ الرقم وتقوم بجمع خاناته باستخدام باقي القسمة
int sumDigits(long long n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10; // إضافة الخانة الأخيرة
        n /= 10;       // حذف الخانة الأخيرة
    }
    return sum;
}

int main() {
    int m, s;
    cin >> m >> s;

    // حالة خاصة: إذا كان المطلوب خانة واحدة ومجموع 0
    // Brute Force العادي يبدأ من 10^0 = 1، لذا سيتجاهل الصفر
    if (m == 1 && s == 0) {
        cout << "0 0" << endl;
        return 0;
    }

    // حساب البداية والنهاية
    // نستخدم long long لأن الأرقام قد تكون كبيرة (حتى 18 خانة)
    long long first = pow(10, m - 1); 
    long long last = pow(10, m);      

    // تهيئة القيم بـ -1 للدلالة على عدم وجود حل بعد
    long long minVal = -1;
    long long maxVal = -1;

    // حلقة التكرار (Brute Force)
    for (long long i = first; i < last; i++) {
        if (sumDigits(i) == s) {
            // إذا كان هذا أول رقم نجده، نعتبره الأصغر حالياً
            if (minVal == -1) {
                minVal = i;
            }
            // دائماً نحدث الأكبر لأننا نمشي تصاعدياً، فآخر رقم نجده هو الأكبر
            maxVal = i;
        }
    }

    if (minVal != -1) {
        cout << minVal << " " << maxVal << endl;
    } else {
        cout << "-1 -1" << endl;
    }

    return 0;
}