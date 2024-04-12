void fun()
{
  int entity_8 = 34;
  char* entity_3;
  char entity_9[entity_8] = "";
  entity_3 = (char*)malloc(52*sizeof(char));
  entity_3[0]='0';
  memset(entity_9, 'n', entity_8-1);
  entity_9[entity_8-1]='0';
  entity_8 = 63;
  memcpy(entity_3, entity_9, entity_8*sizeof(char));
}