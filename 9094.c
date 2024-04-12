void fun()
{
  int entity_6 = 61;
  char entity_0[96] = "";
  entity_0 = NULL;
  char* entity_1;
  char entity_4[94] = "";
  entity_4 = NULL;
  memset(entity_4, 'A', 94-1);
  entity_4[94-1]='';
  memset(entity_0, 'V', 96-1);
  entity_0[96-1]='';
  entity_1 = (char*)malloc(entity_6*sizeof(char));
  entity_1[entity_6-1]='';
  strcpy(entity_1, entity_4);
}