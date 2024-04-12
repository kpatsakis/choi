void fun()
{
  int entity_0 = 87;
  int entity_6 = 43;
  char entity_1[94] = "";
  entity_1 = NULL;
  char* entity_7;
  char entity_3[93] = "";
  entity_3 = NULL;
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[entity_0-1]='';
  memset(entity_3, 'x', 93-1);
  entity_3[93-1]='';
  memset(entity_1, 'Q', 94-1);
  entity_1[94-1]='';
  entity_0 = 99;
  strcpy(entity_7, entity_3);
}