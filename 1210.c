void fun()
{
  int entity_8 = 31;
  char* entity_9;
  char entity_2 = 'k';
  char entity_6[39] = "";
  entity_6 = NULL;
  entity_9 = (char*)malloc(52*sizeof(char));
  entity_9[52-1]='';
  memset(entity_6, 'm', 39-1);
  entity_6[39-1]='';
  memcpy(entity_9, entity_6, 39*sizeof(char));
}