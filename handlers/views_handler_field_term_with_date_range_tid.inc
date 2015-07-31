<?php

class views_handler_field_term_with_date_range_tid extends views_handler_field{
  function render($values) {
    $value = $values->{$this->field_alias};
    $term = taxonomy_term_load($value);

    if(!empty($term->name)){
      return $term->name;
    }
    
    //return $term;
    // check for our custom format
    //if ($format == 'example_custom') {
      // check to see whether value is whithin today range



    //}
    // otherwise render the date using the normal date handler
    //else {
      //return parent::render($values);
    //}
  }

}
