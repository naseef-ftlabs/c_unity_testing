pipeline {
  agent any
  stages {
    stage('Satrting Docker') {
      steps {
        sh '''docker run -it --rm -v "/home/naseef-ftlabs/rawtesting/c_unity_testing":/project throwtheswitch/madsciencelab
'''
      }
    }

    stage('Test ADC Conductor') {
      steps {
        sh '''ceedling test:TestAdcConductor
'''
      }
    }

  }
}