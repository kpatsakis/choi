void fun()
{
  int entity_9 = 68;
  int entity_8 = 11;
  char* entity_0;
  char entity_6[41] = "";
  entity_6 = NULL;
  memset(entity_6, 'n', 41-1);
  entity_6[41-1]='';
  entity_0 = (char*)malloc(entity_9*sizeof(char));
  entity_0[entity_9-1]='';
  entity_9 = 47;
  memcpy(entity_0, entity_6, 41*sizeof(char));
}