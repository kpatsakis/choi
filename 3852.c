void fun()
{
  int entity_8 = 45;
  entity_8 = 23;
  char entity_4[52] = "";
  entity_4 = NULL;
  char* entity_9;
  memset(entity_4, 'M', 52-1);
  entity_4[52-1]='';
  entity_9 = (char*)malloc(entity_8*sizeof(char));
  entity_9[entity_8-1]='';
  memcpy(entity_9, entity_4, 52*sizeof(char));
}