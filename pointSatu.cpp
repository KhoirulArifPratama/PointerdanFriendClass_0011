
int main()
{
    mahasiswa mhs{1}; // object mhs
    mhs.showNim();    // Member Acces Operator

    mahasiswa &refMhs = mhs;
    refMhs.nim = 2; // Member Acces Operator
    mhs.showNim();

    mahasiswa *pMhs = &mhs;
    pMhs->nim = 3; // Arrow Operator
    pMhs->showNim();
    return 0;
}
