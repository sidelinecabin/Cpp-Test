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
                cmake '-GG "Unix MakeFiles" ..'
		make '' 
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
