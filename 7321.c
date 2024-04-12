void fun()
{
  int entity_8 = 65;
  char* entity_3;
  char entity_9[entity_8] = "";
  entity_9 = NULL;
  memset(entity_9, 'l', entity_8-1);
  entity_9[entity_8-1]='';
  entity_3 = (char*)malloc(52*sizeof(char));
  entity_3[52-1]='';
  memcpy(entity_3, entity_9, entity_8*sizeof(char));
}