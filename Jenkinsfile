#!/usr/bin/env groovy

pipeline {
    agent {
        docker {
            image 'rikorose/gcc-cmake'
            args '-v /root/.m2:/root/.m2' 
        }
    }
    stages {
        stage('Build') { 
            steps {
                sh 'cmake -GG "Unix MakeFiles" ..'
		sh 'make' 
            }
	}
	stage('Run')
	{
		steps{
		sh './output'
		}
	}
    }
}
