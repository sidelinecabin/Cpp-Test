#!/usr/bin/env groovy

pipeline {
    agent {
        docker {
            image 'madduci/docker-ubuntu-cpp' 
            args '-v /root/.m2:/root/.m2' 
        }
    }
    stages {
        stage('Build') { 
            steps {
                cmake '-GG "Unix MakeFiles" ..'
		make 
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
