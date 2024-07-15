function randcolor() {
  const letter = "0123456789ABCDEF";
  let color = "#";
  for (let i = 0; i < 6; i++) {
    color = color + letter[Math.floor(Math.random() * 16)];
  }
  return color;
}

function changeBackgroundToRandomGradient() {
  const color1 = randcolor();
  const color2 = randcolor();
  const direction = Math.floor(Math.random() * 360); // Random direction
  document.body.style.background = `linear-gradient(${direction}deg, ${color1}, ${color2})`;
  document.getElementById(
    "para",
  ).textContent = `linear-gradient(${direction}deg, ${color1}, ${color2})`;
}
