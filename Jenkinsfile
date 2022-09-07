pipeline {
  agent any
  stages {
    stage('Docker usermod') {
      steps {
        sh '''sudo -S usermod -aG docker ${USER}
'''
      }
    }

    stage('Docker su') {
      steps {
        sh '''su -S ${USER}
'''
      }
    }

    stage('Starting Docker') {
      steps {
        sh '''docker run --rm -v "/var/lib/jenkins/workspace/c_unity_testing_master":/project throwtheswitch/madsciencelab
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