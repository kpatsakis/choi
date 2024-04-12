void fun()
{
  int entity_6 = 81;
  int entity_1 = 78;
  char entity_9 = 'e';
  char* entity_4;
  char entity_5[65] = "";
  entity_5 = NULL;
  char entity_0[entity_6] = "";
  entity_0 = NULL;
  memset(entity_5, 'm', 65-1);
  entity_5[65-1]='';
  entity_4 = (char*)malloc(38*sizeof(char));
  entity_4[38-1]='';
  memset(entity_0, 'F', entity_6-1);
  entity_0[entity_6-1]='';
  strcpy(entity_4, entity_0);
}