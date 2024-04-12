void fun()
{
  int entity_8 = 86;
  char entity_1[63] = "";
  entity_1 = NULL;
  char* entity_0;
  char entity_3[9] = "";
  entity_3 = NULL;
  memset(entity_1, 'U', 63-1);
  entity_1[63-1]='';
  memset(entity_3, 'I', 9-1);
  entity_3[9-1]='';
  entity_0 = (char*)malloc(entity_8*sizeof(char));
  entity_0[entity_8-1]='';
  strcpy(entity_0, entity_3);
}