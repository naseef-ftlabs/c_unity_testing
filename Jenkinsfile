pipeline {
  agent none
  stages {
    stage('Starting Docker Cont.') {
      agent {
        docker { image 'throwtheswitch/madsciencelab' }
      }
      steps {
        sh 'ceedling"
      }
    }
  }
}
