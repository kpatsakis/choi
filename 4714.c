void fun()
{
  int entity_3 = 76;
  char entity_2[94] = "";
  entity_2 = NULL;
  char entity_0[24] = "";
  entity_0 = NULL;
  char entity_7[34] = "";
  entity_7 = NULL;
  char* entity_5;
  char entity_6[98] = "";
  entity_6 = NULL;
  memset(entity_7, 'U', 34-1);
  entity_7[34-1]='';
  memset(entity_0, 'Q', 24-1);
  entity_0[24-1]='';
  memset(entity_6, 'w', 98-1);
  entity_6[98-1]='';
  entity_5 = (char*)malloc(entity_3*sizeof(char));
  entity_5[entity_3-1]='';
  memset(entity_2, 'n', 94-1);
  entity_2[94-1]='';
  strcpy(entity_5, entity_2);
}