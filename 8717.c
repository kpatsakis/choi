void fun()
{
  int entity_9 = 68;
  char* entity_0;
  char entity_4[52] = "";
  entity_4 = NULL;
  entity_0 = (char*)malloc(entity_9*sizeof(char));
  entity_0[entity_9-1]='';
  memset(entity_4, 'l', 52-1);
  entity_4[52-1]='';
  memcpy(entity_0, entity_4, 52*sizeof(char));
}