'use strict';
Drupal.behaviors.comunidad = {
  attach: function () {
    jQuery('.comunidad-superior').css('max-width', jQuery('.comunidad-superior .views-row').size() * 182);
    jQuery('.comunidad-inferior').css('max-width', jQuery('.comunidad-inferior .views-row').size() * 182);
  }
};
