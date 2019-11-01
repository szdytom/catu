pipeline {
  agent any
  stages {
    stage('Check Out') {
      steps {
        checkout([$class: 'GitSCM', branches: [[name: env.GIT_BUILD_REF]], 
                                                          userRemoteConfigs: [[url: env.GIT_REPO_URL, credentialsId: env.CREDENTIALS_ID]]])
      }
    }
    stage('Compile') {
      steps {
        sh 'g++ -o test_random.out ./test/test_random.cpp -std=c++11'
        sh 'g++ -o test_tools.out ./test/test_tools.cpp -std=c++11'
      }
    }
    stage('Run') {
      steps {
        sh './test_random.out'
        sh './test_tools.out'
      }
    }
    stage('Remove') {
      steps {
        sh 'rm test_*.out'
      }
    }
  }
}