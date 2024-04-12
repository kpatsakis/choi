void fun()
{
  int entity_6 = 94;
  entity_6 = 94;
  char* entity_0;
  char entity_3[54] = "";
  entity_3 = NULL;
  char entity_1[entity_6] = "";
  entity_1 = NULL;
  char entity_8 = 'M';
  memset(entity_3, 'C', 54-1);
  entity_3[54-1]='';
  memset(entity_1, 'Y', entity_6-1);
  entity_1[entity_6-1]='';
  entity_0 = (char*)malloc(44*sizeof(char));
  entity_0[44-1]='';
  strcpy(entity_0, entity_1);
}