void fun()
{
  int entity_0 = 68;
  char entity_7[entity_0] = "";
  entity_7 = NULL;
  char entity_6[60] = "";
  entity_6 = NULL;
  char* entity_1;
  char entity_5[81] = "";
  entity_5 = NULL;
  memset(entity_5, 'x', 81-1);
  entity_5[81-1]='';
  memset(entity_7, 'y', entity_0-1);
  entity_7[entity_0-1]='';
  memset(entity_6, 'C', 60-1);
  entity_6[60-1]='';
  entity_1 = (char*)malloc(65*sizeof(char));
  entity_1[65-1]='';
  entity_0 = 81;
  strcpy(entity_1, entity_7);
}