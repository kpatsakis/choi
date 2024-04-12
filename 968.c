void fun()
{
  int entity_9 = 24;
  char entity_5[30] = "";
  entity_5 = NULL;
  char* entity_6;
  char entity_0[44] = "";
  entity_0 = NULL;
  char entity_2[40] = "";
  entity_2 = NULL;
  memset(entity_0, 'Y', 44-1);
  entity_0[44-1]='';
  memset(entity_2, 'k', 40-1);
  entity_2[40-1]='';
  memset(entity_5, 'K', 30-1);
  entity_5[30-1]='';
  entity_6 = (char*)malloc(entity_9*sizeof(char));
  entity_6[entity_9-1]='';
  entity_9 = 75;
  strcpy(entity_6, entity_2);
}