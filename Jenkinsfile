pipeline {
  agent any
  stages {
    stage('Docker usermod') {
      parallel {
        stage('Docker usermod') {
          steps {
            sh '''sudo usermod -aG docker ${USER}
'''
          }
        }

        stage('password') {
          steps {
            sh 'ftlabs'
          }
        }

      }
    }

    stage('Docker su') {
      parallel {
        stage('Docker su') {
          steps {
            sh '''su -s ${USER}
'''
          }
        }

        stage('password') {
          steps {
            sh 'ftlabs'
          }
        }

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