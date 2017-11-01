#!/usr/bin/env groovy

pipeline {
    agent {
        docker {
            image 'maven:3-alpine' 
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
	Stage('Run')
	{
		steps{
		sh './output'
		}
	}
    }
}
