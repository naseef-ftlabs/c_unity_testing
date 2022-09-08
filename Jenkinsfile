pipeline {
  agent any
  stages {
    stage('Starting Docker Cont.') {
      steps {
        sh '''whoami && docker run --rm -v "/var/lib/jenkins/workspace/c_unity_testing_master":/project throwtheswitch/madsciencelab
'''
        }
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
