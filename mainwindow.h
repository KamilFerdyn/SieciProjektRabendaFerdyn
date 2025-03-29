#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QtCharts/QLineSeries>
#include <QtCharts/QValueAxis>
#include "ModelARX.h"
#include "ProstyUAR.h"
#include "RegulatorPID.h"
#include "arxokno.h"

class QChartView;
class QChart;

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void updateChart();
    // void on_pushButtonStart_clicked();
    // void on_pushButtonReset_clicked();
    // void on_lineWspolczynnikA_returnPressed();
    // void on_lineWspolczynnikB_returnPressed();
    // void aktualizujWykres();
    // void on_chartWidget_customContextMenuRequested(const QPoint &pos);

    void on_pushButtonStart_clicked();

    void on_pushButtonReset_clicked();

    void on_pushButtonStop_clicked();

    //  void on_doubleSpinBoxP_valueChanged(double arg1);

    //  void on_doubleSpinBoxI_valueChanged(double arg1);

    //   void on_doubleSpinBoxD_valueChanged(double arg1);

    //  void on_doubleSpinBoxNoise_valueChanged(double arg1);

    void on_spinBoxK_valueChanged(int arg1);

    void on_lineEditA_editingFinished();

    void on_lineEditB_editingFinished();

    // void on_doubleSpinBoxValue_valueChanged(double arg1);

    void on_spinBoxInterval_editingFinished();

    void on_pushButtonLoad_clicked();

    void on_pushButtonSave_clicked();

    void on_pushButtonARX_clicked();

    void on_doubleSpinBoxP_editingFinished();

    void on_doubleSpinBoxI_editingFinished();

    void on_doubleSpinBoxD_editingFinished();

    void on_doubleSpinBoxValue_editingFinished();

    void on_doubleSpinBoxNoise_editingFinished();

    void on_doubleSpinBoxTime_editingFinished();

    void on_doubleSpinBoxSinusAmp_editingFinished();

private:
    void resetDefaultValues();
    void resetChart();
    void resetAllSettings();
    void updateSettings();

    Ui::MainWindow *ui = nullptr;
    QTimer *timer = nullptr;
    QChartView *chartView = nullptr;
    QChart *chart = nullptr;
    QChartView *chartViewError = nullptr;
    QChart *chartError = nullptr;
    QChartView *chartPIDView = nullptr;
    QChart *chartPID = nullptr;
    QChartView *chartSterowanieView = nullptr;
    QChart *chartSterowanie = nullptr;

    ModelARX *arx = nullptr;
    RegulatorPID *pid = nullptr;
    ProstyUAR *uar = nullptr;

    std::vector<double> sygWe;
    std::vector<double> faktSygWy;
    //unsigned long long int numerProbki = 0;
    QLineSeries *outSeries = nullptr;
    QLineSeries *inSeries = nullptr;
    QLineSeries *errSeries = nullptr;

    QLineSeries *pSeries = nullptr;
    QLineSeries *iSeries = nullptr;
    QLineSeries *dSeries = nullptr;

    QLineSeries *sterowanieSeries = nullptr;

    double time = 0, WARTOSC = 2.0, OKRES = 10.0, AMPLITUDA = 1.0;
    int newInterval = 800;

    //std::vector<double> spodzSygWy; // spodziewana sekwencja wy (tu same 0)
};

#endif // MAINWINDOW_H
