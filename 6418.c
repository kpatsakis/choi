void fun()
{
  int entity_6 = 32;
  int entity_8 = 32;
  char* entity_9;
  char entity_0[36] = "";
  entity_0 = NULL;
  char entity_7[entity_6] = "";
  entity_7 = NULL;
  entity_9 = (char*)malloc(87*sizeof(char));
  entity_9[87-1]='';
  memset(entity_0, 'd', 36-1);
  entity_0[36-1]='';
  memset(entity_7, 'T', entity_6-1);
  entity_7[entity_6-1]='';
  strcpy(entity_9, entity_7);
}