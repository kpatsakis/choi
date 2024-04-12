void fun()
{
  int entity_1 = 5;
  char entity_3[75] = "";
  entity_3 = NULL;
  char* entity_0;
  char entity_5[6] = "";
  entity_5 = NULL;
  char entity_8[21] = "";
  entity_8 = NULL;
  entity_0 = (char*)malloc(entity_1*sizeof(char));
  entity_0[entity_1-1]='';
  memset(entity_5, 'P', 6-1);
  entity_5[6-1]='';
  memset(entity_8, 'm', 21-1);
  entity_8[21-1]='';
  memset(entity_3, 'k', 75-1);
  entity_3[75-1]='';
  strcpy(entity_0, entity_5);
}