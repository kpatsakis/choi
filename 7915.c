void fun()
{
  int entity_5 = 7;
  char entity_4[94] = "";
  entity_4 = NULL;
  char* entity_1;
  char entity_0[100] = "";
  entity_0 = NULL;
  char entity_3[98] = "";
  entity_3 = NULL;
  entity_1 = (char*)malloc(entity_5*sizeof(char));
  entity_1[entity_5-1]='';
  memset(entity_3, 'B', 98-1);
  entity_3[98-1]='';
  memset(entity_4, 'Y', 94-1);
  entity_4[94-1]='';
  memset(entity_0, 's', 100-1);
  entity_0[100-1]='';
  strcpy(entity_1, entity_0);
}