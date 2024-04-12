# StickBadmintonRE


## Risketos Básicos:

- [X] Personaje que puede raquetear de varias formas, bolea, rápida, dejada... 
- [X] IA enemiga a diferentes niveles.
- [X] Customización del personaje (ropa, peinado y cosas así)

## Risketos Opcionales:

- [X] Compatibilidad con mando (XBOX)
- [X] Golpear a enemigos (Se quedan stuneados durante 1 segundo)
- [X] Guardar configuración

## Controles

### TECLADO
- Up / Down / Left / Right Arrows -> Movimiento
- Space -> Saltar
- Right ctrl -> DirectShot
- Up + Left ctrl -> ReverseShot
- Right Shift -> DriveShot
- Up / Down + Right Shift -> Drive shot up / down direction
- Right Alt -> Dash (Solo en el modo de juego Goodminton, require una barra de energia)

### MANDO
- Left gamepad Thumbstick -> Movimiento
- A button -> Saltar
- X button -> DirectShot
- X button + Left gamepad Thumbstick Y Axis -> Reverse Shot 
- Y button -> Drive Shot
- Y button + Left gamepad Thumbstick Y Axis -> Drive shot up / down direction
- B button -> Dash

# MULTIPLAYER (Listen-Server)

## Cosas a cambiar

### AGameStateBase
- Movimiento pluma -> Multicast RPC server (reliable)
- Golpear pluma con raqueta -> RPC server (reliable)
    - Si esta colisionando con alguna capsula de un jugador, setearle el owner a este para poder aplicarle el daño // Hacer que la pluma spawnee en el server para no gestionar owner
    
    - Jugador golpea pluma (cliente) -> Aplicar daño (server)
    
    - Validar daño para que no pueda superar el valor más alto de ese tipo
    
- Spawn de los jugadores -> Server side Replication
- Anotar puntos / Actualizar puntuación -> Replication server

### APlayerState
- Movimiento, estados, etc. -> Replication
    - (Client) Validar velocidad de los jugadores es igual o menor a la máxima
    - Validar que tengan que esperar X tiempo para volver a golpear