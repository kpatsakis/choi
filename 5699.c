void fun()
{
  int entity_4 = 65;
  char entity_9[41] = "";
  entity_9 = NULL;
  char* entity_0;
  char entity_6[entity_4] = "";
  entity_6 = NULL;
  memset(entity_9, 'u', 41-1);
  entity_9[41-1]='';
  entity_0 = (char*)malloc(19*sizeof(char));
  entity_0[19-1]='';
  memset(entity_6, 'Y', entity_4-1);
  entity_6[entity_4-1]='';
  memcpy(entity_0, entity_6, entity_4*sizeof(char));
}