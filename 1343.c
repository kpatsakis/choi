void fun()
{
  int entity_6 = 24;
  char entity_9[13] = "";
  entity_9 = NULL;
  char* entity_3;
  char entity_0[entity_6] = "";
  entity_0 = NULL;
  memset(entity_9, 'd', 13-1);
  entity_9[13-1]='';
  entity_3 = (char*)malloc(74*sizeof(char));
  entity_3[74-1]='';
  memset(entity_0, 'V', entity_6-1);
  entity_0[entity_6-1]='';
  strcpy(entity_3, entity_0);
}