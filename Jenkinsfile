pipeline {
  agent any
  stages {
    stage('检出') {
      steps {
        checkout([$class: 'GitSCM', branches: [[name: env.GIT_BUILD_REF]], 
                          userRemoteConfigs: [[url: env.GIT_REPO_URL, credentialsId: env.CREDENTIALS_ID]]])
      }
    }
    stage('push') {
      steps {
        retry(count: 5) {
          git(url: 'https://github.com/szdytom/catu.git', branch: 'master', credentialsId: '$ACCESS$')
        }

      }
    }
  }
}