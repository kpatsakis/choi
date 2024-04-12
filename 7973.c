void fun()
{
  int entity_7 = 82;
  char* entity_8;
  char entity_9[52] = "";
  entity_9 = NULL;
  entity_8 = (char*)malloc(entity_7*sizeof(char));
  entity_8[entity_7-1]='';
  memset(entity_9, 'D', 52-1);
  entity_9[52-1]='';
  entity_7 = 82;
  memcpy(entity_8, entity_9, 52*sizeof(char));
}