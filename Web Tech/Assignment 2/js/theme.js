const THEME_KEY = 'DARK_THEME_KEY';

function toggleTheme() {
    let current = isDarkThemeEnabled();

    console.log(`Theme change to: ${current === true ? 'light' : 'dark'}`);

    localStorage.setItem(THEME_KEY, (current === true ? 'light' : 'dark'));
    loadTheme();
}

function isDarkThemeEnabled() {
    let value = localStorage.getItem(THEME_KEY);
    if (!value) localStorage.setItem(THEME_KEY, 'light');
    return (value === 'dark');
}

function loadTheme() {
    updateCharts();

    console.log(`Current ${isDarkThemeEnabled()}`)

    if (isDarkThemeEnabled()) {
        // Dark theme
        $('*').addClass('is-dark');
        console.log(`Adding dark theme to body`);
    }else {
        // Light theme
        $('*').removeClass('is-dark');
    }
}

function updateCharts() {
    if (!window.allCharts) return;

    if (isDarkThemeEnabled()) {
        window.allCharts.forEach(c => {
            c.options.theme = 'dark1';
            c.render();
        });
    } else {
        window.allCharts.forEach(c => {
            c.options.theme = 'light1';
            c.render();
        });
    }
}

loadTheme();