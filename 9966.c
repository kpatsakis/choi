void fun()
{
  int entity_3 = 80;
  entity_3 = 80;
  char* entity_0;
  char entity_9[64] = "";
  entity_9 = NULL;
  char entity_7[entity_3] = "";
  entity_7 = NULL;
  memset(entity_7, 'h', entity_3-1);
  entity_7[entity_3-1]='';
  entity_0 = (char*)malloc(45*sizeof(char));
  entity_0[45-1]='';
  memset(entity_9, 'd', 64-1);
  entity_9[64-1]='';
  strcpy(entity_0, entity_7);
}