void fun()
{
  int entity_5 = 78;
  entity_5 = 69;
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  char* entity_6;
  char entity_9 = 's';
  entity_6 = (char*)malloc(52*sizeof(char));
  entity_6[52-1]='';
  memset(entity_2, 'W', entity_5-1);
  entity_2[entity_5-1]='';
  memcpy(entity_6, entity_2, entity_5*sizeof(char));
}