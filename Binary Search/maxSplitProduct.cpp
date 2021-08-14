int solve(int n) {
    if (n == 2) return 1;
    if (n == 3) return 2;

    int result;

    switch (n % 3) {
        case 0:
            result = pow(3, n / 3);
            break;

        case 1:
            result = 4 * pow(3, (n / 3) - 1);
            break;

        case 2:
            result = 2 * pow(3, n / 3);
            break;
    }
    return result;
}