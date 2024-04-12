void fun()
{
  int entity_4 = 1;
  int entity_5 = 28;
  char* entity_6;
  char entity_0[55] = "";
  entity_0 = NULL;
  char entity_1[52] = "";
  entity_1 = NULL;
  char entity_2[72] = "";
  entity_2 = NULL;
  memset(entity_1, 'I', 52-1);
  entity_1[52-1]='';
  memset(entity_0, 'U', 55-1);
  entity_0[55-1]='';
  entity_6 = (char*)malloc(entity_5*sizeof(char));
  entity_6[entity_5-1]='';
  memset(entity_2, 'm', 72-1);
  entity_2[72-1]='';
  entity_5 = 36;
  strcpy(entity_6, entity_0);
}