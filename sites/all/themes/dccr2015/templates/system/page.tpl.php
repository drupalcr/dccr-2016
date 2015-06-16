<header class="main-header" role="banner">

  <?php if ($page['utility_bar']): ?>
    <div class="utility-bar">
      <div class="utility-bar-content">
        <?php print render($page['utility_bar']); ?>
      </div><!-- /utility-bar-content -->
    </div><!-- /utility-bar -->
  <?php endif; ?>
  <div class="header-content">

    <?php if ($site_name || $site_slogan): ?>

        <?php if ($site_name): ?>

            <div class="logo-container">
              <?php if ($title): ?>
              <h2 class="logo-site-name">
                <a class="logo-site-name-link" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
              </h2>
              
              <?php else: /* Use h1 when the content title is empty */ ?>
                <h1 class="logo-site-name">
                  <a class="logo-site-name-link" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
                </h1>
              <?php endif; ?>
              
              <h3 class="event-logo-date"><?php print t('July 29 - 31'); ?></h3>
              <span class="event-logo-location">Universidad de Costa Rica</span>
            </div>

        <?php endif; ?>

        <?php if ($site_slogan): ?>
          <?php print $site_slogan; ?>
        <?php endif; ?>

    <?php endif; ?>

    <?php print render($page['header']); ?>

  </div><!-- /header-content -->
</header>

<?php if ($page['above_content']): ?>
  <section class="above-content">
    <?php print render($page['above_content']); ?>
  </section>
<?php endif; // end Above Content ?>

<?php if ($page['highlighted']): ?>
  <?php print render($page['highlighted']); ?>
<?php endif; ?>

<main class="main-content">
  <div class="main-content-limiter">
    <?php if ($breadcrumb): ?>
      <!-- <?php print $breadcrumb; ?> -->
    <?php endif; ?>
    <?php if ($messages): ?>
    <div class="messages-wrapper">
      <div class="messages-content">
        <?php print $messages; ?>
      </div>
    </div>
    <?php endif; ?>
      <a id="main-content"></a>
      <div class="main" role="main">
        <?php print render($title_prefix); ?>
        <?php if ($title): ?><h1 class="page-title"><?php print $title; ?></h1><?php endif; ?>
        <?php print render($title_suffix); ?>

        <?php if ($tabs): ?>
          <?php print render($tabs); ?>

        <?php endif; ?>

        <?php print render($page['help']); ?>

        <?php if ($action_links): ?>
          <ul class="action-links">
            <?php print render($action_links); ?>
          </ul>
        <?php endif; ?>

        <?php print render($page['content']); ?>

      </div>

    <?php if ($page['sidebar_second']): ?>
      <aside class="sidebar sidebar-second">
        <?php print render($page['sidebar_second']); ?>
      </aside> <!-- /.section, /#sidebar-second -->
    <?php endif; ?>
  </div>
</main>

<?php if ($page['below_content']): ?>
  <section class="below-content">
    <?php print render($page['below_content']); ?>
  </section>
<?php endif; // end Below Content ?>

<footer class="footer" role="contentinfo">
  <div class="footer-content">
    <?php print render($page['footer']); ?>
  </div>
</footer>

<?php if ($page['closure']): ?>
<aside class="closure">
  <?php print render($page['closure']); ?>
</aside>
<?php endif; // end closure ?>
