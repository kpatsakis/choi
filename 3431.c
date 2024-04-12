void fun()
{
  int entity_7 = 41;
  char entity_3[78] = "";
  entity_3 = NULL;
  char entity_1[24] = "";
  entity_1 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(entity_7*sizeof(char));
  entity_0[entity_7-1]='';
  memset(entity_1, 'g', 24-1);
  entity_1[24-1]='';
  memset(entity_3, 'n', 78-1);
  entity_3[78-1]='';
  strcpy(entity_0, entity_3);
}