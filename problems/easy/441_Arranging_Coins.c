/* arrangeCoins: return the number of complete rows that we can build on a staircase with using `n` coins */
int arrangeCoins(int n)
{
    int rc = 1; /* current row coins */
    while (n > (rc - 1)) {
        n = n - rc;
        rc++; /* preparing for next row */
    }

    return rc - 1;
}

