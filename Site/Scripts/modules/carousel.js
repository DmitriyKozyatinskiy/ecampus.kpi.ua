/**
 * @namespace Carousel
 * @memberOf  Core
 */
var Core = (function (Core, _u, $) {
    "use strict";

    var /** 
         * Slick carousel settings
         * 
         * @type {Object}
         * @private
         */
         _settings = {
             arrows: true,
             speed: 300,
             slidesToShow: 5,
             slidesToScroll: 5,
             variableWidth: true,
             draggable: false,
             infinite: false,
             nextArrow: $(".glyphicon-chevron-left"),
             prevArrow: $(".glyphicon-chevron-right"),
             responsive: [
               {
                   breakpoint: 1024,
                   settings: {
                       slidesToShow: 3,
                       slidesToScroll: 3,
                       infinite: true,
                       dots: true
                   }
               },
               {
                   breakpoint: 600,
                   settings: {
                       slidesToShow: 2,
                       slidesToScroll: 2
                   }
               },
               {
                   breakpoint: 480,
                   settings: {
                       slidesToShow: 1,
                       slidesToScroll: 1
                   }
               }
             ]
         },

        /** 
         * List of the css ids
         * 
         * @type {Object}
         * @private
         */
         _cssId = {
             carousel: "js-carousel",
         },

        /**
         * Setup this module
         *
         * @public
         */
         setup = function () {
             $(_u.toCssId(_cssId.carousel)).slick(_settings);
         };

    return Core.register("Carousel", {
        setup: setup
    });
}(Core || {}, _u, jQuery));