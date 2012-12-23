#include <QtCore/QString>
#include <QtTest/QtTest>

class TestQStringTest : public QObject
{
    Q_OBJECT
    
public:
    TestQStringTest();
    
private slots:
    void toUpper_data();
    void toUpper();

private Q_SLOTS:
    void testCase1();
};

TestQStringTest::TestQStringTest()
{
}

void TestQStringTest::testCase1()
{
    QVERIFY2(true, "Failure");
}

void TestQStringTest::toUpper()
{
//    QString str = "Hello";
//    QVERIFY(str.toUpper() == "HELLO");
      QFETCH(QString, string);
      QFETCH(QString, result);

      QCOMPARE(string.toUpper(), result);
}

void TestQStringTest::toUpper_data()
{
    QTest::addColumn<QString>("string");
    QTest::addColumn<QString>("result");

    QTest::newRow("all lower") << "hello" << "HELLO";
    QTest::newRow("mixed")     << "Hello" << "HELLO";
    QTest::newRow("all upper") << "HELLO" << "HELLO";
}

QTEST_APPLESS_MAIN(TestQStringTest)

#include "tst_testqstringtest.moc"
