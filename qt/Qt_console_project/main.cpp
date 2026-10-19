// use Qt libraries not iostream or other (as QT is framwork so has every thing in it)
#include <QCoreApplication>
#include<QTextStream> // input output console data
#include<QString>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QTextStream inputStream(stdin);
    QTextStream outputStream(stdout);  // std:: (similary use QTextStream

    outputStream<<"Enter your name : ";
    outputStream.flush(); // as to clear output buffer
    QString username=inputStream.read(50); // maxlength = 50
outputStream.flush();
    outputStream<<"Hello, "<<username;
    outputStream.flush();
    return a.exec(); // for loop functionality
}
