'use strict';
// Configuring Grunt tasks:
// http://gruntjs.com/configuring-tasks
module.exports = function (grunt) {
    // load all grunt tasks matching the `grunt-*` pattern
    // https://github.com/sindresorhus/load-grunt-tasks
    require('load-grunt-tasks')(grunt);

    grunt.initConfig({
        pkg: grunt.file.readJSON('package.json'),

        // Watch for changes and trigger sass, jshint & uglify
        watch: {
          compass: {
            files: ['sass/{,**/}*.scss'],
            tasks: ['sass:dev']
          },
          js: {
            files: '<%= jshint.all %>',
            tasks: ['newer:jshint', 'uglify:dev']
          },
          images: {
            files: ['src-img/**/*.{png,jpg,gif}'],
            tasks: ['newer:imagemin'],
            options: {
            spawn: false,
            }
          }
        },

        postcss: {
          options: {
            map: true,
            processors: [
              require('autoprefixer-core')({browsers: 'last 2 versions'}).postcss
            ]
          },
          dist: {
            src: 'css/*.css'
          }
        },

        // Sass
        sass: {
          options: {
            sourceMap: true,
            includePaths: require('node-neat').includePaths,
          },
          dev: {
            options: {
              outputStyle: 'nested',
            },
            files: {
              'css/styles.css': 'sass/styles.scss',
            }
          },
          prod: {
            options: {
              outputStyle: 'compressed',
            },
            files: {
              'css/styles.css': 'sass/styles.scss', 
            },
          },
        },
        
        // Javascript linting with jshint
        jshint: {
          options: {
            jshintrc: '.jshintrc',
            reporter: require('jshint-stylish')
          },
          all: [
            'js/scripts.js'
          ]
        },

        imagemin: {
          options: {
            optimizationLevel: 3,
            cache: false
          },

          dist: {
            files: [{
              // cwd is 'current working directory'
              expand: true,                  // Enable dynamic expansion
              cwd: 'src-img/',               // Src matches are relative to this path
              src: ['**/*.{png,jpg,gif}'],   // Actual patterns to match
              dest: 'img/'                  // Destination path prefix
            }]
          }
        },

        // Concat & minify
        uglify: {
          dev: {
            options: {
              mangle: false,
              compress: false,
              preserveComments: 'all',
              beautify: true
            },
            files: {
              'js/scripts.min.js': ['js/scripts.js']
            }
          },
          prod: {
            options: {
              mangle: true,
              compress: true
            },
            files: {
              'js/scripts.min.js': ['js/scripts.js']
            }
          }
        }
    });
 
    // Load the plugin(s), but I'm using load-grunt-tasks 
    // https://github.com/sindresorhus/load-grunt-tasks
    // grunt.loadNpmTasks('grunt-concurrent');
 
 
    // Where we tell Grunt what to do when we type "grunt" into the terminal.
    // The "default" task is what I leave running all the time. Since it is the default, 
    // you can start it by simply running 
    // $ grunt
    // or, to run production's tasks
    // $ grunt build
    
    grunt.registerTask('prod', [
        'jshint',
        'uglify:prod',
        'sass:prod'
    ]);

    grunt.registerTask('default', [
        'imagemin',
        'newer:jshint',
        'uglify:dev',
        'sass:dev',
        'watch'
    ]);
};