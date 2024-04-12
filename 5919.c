void fun()
{
  int entity_8 = 7;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  char entity_9[64] = "";
  entity_9 = NULL;
  char* entity_0;
  memset(entity_9, 'G', 64-1);
  entity_9[64-1]='';
  entity_0 = (char*)malloc(13*sizeof(char));
  entity_0[13-1]='';
  memset(entity_7, 'f', entity_8-1);
  entity_7[entity_8-1]='';
  entity_8 = 37;
  strcpy(entity_0, entity_7);
}