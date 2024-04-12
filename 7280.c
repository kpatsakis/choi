void fun()
{
  int entity_3 = 12;
  char* entity_6;
  char entity_9[61] = "";
  entity_9 = NULL;
  char entity_0[36] = "";
  entity_0 = NULL;
  memset(entity_9, 'G', 61-1);
  entity_9[61-1]='';
  memset(entity_0, 'Y', 36-1);
  entity_0[36-1]='';
  entity_6 = (char*)malloc(entity_3*sizeof(char));
  entity_6[entity_3-1]='';
  strcpy(entity_6, entity_0);
}