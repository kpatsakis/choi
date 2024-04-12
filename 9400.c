void fun()
{
  int entity_1 = 92;
  entity_1 = 92;
  char* entity_5;
  char entity_8[entity_1] = "";
  entity_8 = NULL;
  char entity_3[32] = "";
  entity_3 = NULL;
  memset(entity_8, 'M', entity_1-1);
  entity_8[entity_1-1]='';
  memset(entity_3, 'x', 32-1);
  entity_3[32-1]='';
  entity_5 = (char*)malloc(43*sizeof(char));
  entity_5[43-1]='';
  strcpy(entity_5, entity_8);
}