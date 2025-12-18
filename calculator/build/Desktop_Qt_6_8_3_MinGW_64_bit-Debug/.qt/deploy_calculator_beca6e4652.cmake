include("D:/Qt/QTcode/easyProject/calculator/build/Desktop_Qt_6_8_3_MinGW_64_bit-Debug/.qt/QtDeploySupport.cmake")
include("${CMAKE_CURRENT_LIST_DIR}/calculator-plugins.cmake" OPTIONAL)
set(__QT_DEPLOY_I18N_CATALOGS "qtbase;qtdeclarative;qtdeclarative;qtdeclarative")

qt6_deploy_runtime_dependencies(
    EXECUTABLE D:/Qt/QTcode/easyProject/calculator/build/Desktop_Qt_6_8_3_MinGW_64_bit-Debug/calculator.exe
    GENERATE_QT_CONF
)
