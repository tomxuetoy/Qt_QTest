#include <QtCore/QString>
#include <QtTest/QtTest>

class TestQStringTest : public QObject
{
    Q_OBJECT
    
public:
    TestQStringTest();
    
private slots:
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
    QString str = "Hello";
    QVERIFY(str.toUpper() == "HELLO");
}

QTEST_APPLESS_MAIN(TestQStringTest)

#include "tst_testqstringtest.moc"
