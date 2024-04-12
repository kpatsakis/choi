void fun()
{
  int entity_9 = 22;
  char entity_7[19] = "";
  entity_7 = NULL;
  char* entity_4;
  char entity_0[entity_9] = "";
  entity_0 = NULL;
  memset(entity_7, 'p', 19-1);
  entity_7[19-1]='';
  memset(entity_0, 'W', entity_9-1);
  entity_0[entity_9-1]='';
  entity_4 = (char*)malloc(35*sizeof(char));
  entity_4[35-1]='';
  memcpy(entity_4, entity_0, entity_9*sizeof(char));
}