const THEME_KEY = 'DARK_THEME_KEY';

function toggleTheme() {
    let current = !isDarkThemeEnabled();
    console.log(`Theme change to: ${isDarkThemeEnabled()}`);

    localStorage.setItem(THEME_KEY, current);
    loadTheme();
}

function isDarkThemeEnabled() {
    let value = localStorage.getItem(THEME_KEY);
    if (!value) localStorage.setItem(THEME_KEY, false);
    return value;
}

function loadTheme() {
    console.log(isDarkThemeEnabled())
    if (isDarkThemeEnabled()) {
        // Dark theme
        $('body').addClass('is-dark');
    }else {
        // Light theme
        $('body').removeClass('is-dark');
    }
}
loadTheme();