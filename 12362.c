void fun()
{
  int entity_2 = 50;
  char* entity_3;
  char* entity_8;
  char entity_9[entity_2] = "";
  char* entity_6;
  entity_6 = (char*)malloc(76*sizeof(char));
  entity_6[0]='0';
  memset(entity_9, 'P', entity_2-1);
  entity_9[entity_2-1]='0';
  entity_3 = (char*)malloc(52*sizeof(char));
  entity_3[0]='0';
  entity_8 = (char*)malloc(41*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_6, entity_9, entity_2*sizeof(char));
}