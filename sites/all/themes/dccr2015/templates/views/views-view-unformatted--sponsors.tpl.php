<?php

/**
 * @file
 * View that shows the sponsors grouped by Level
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h3 class="<?php print(strtolower($title)); ?>"><?php print $title; ?></h3>
<?php endif; ?>

<div class="sponsors-wrapper">
	<?php foreach ($rows as $id => $row): ?>
	  <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
	    <?php print $row; ?>
	  </div>
	<?php endforeach; ?>
</div>