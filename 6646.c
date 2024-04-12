void fun()
{
  int entity_9 = 18;
  char* entity_6;
  char entity_8[52] = "";
  entity_8 = NULL;
  memset(entity_8, 'I', 52-1);
  entity_8[52-1]='';
  entity_6 = (char*)malloc(entity_9*sizeof(char));
  entity_6[entity_9-1]='';
  entity_9 = 14;
  memcpy(entity_6, entity_8, 52*sizeof(char));
}