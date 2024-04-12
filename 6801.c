void fun()
{
  int entity_4 = 22;
  int entity_0 = 72;
  char entity_8[4] = "";
  entity_8 = NULL;
  char* entity_3;
  char entity_1[9] = "";
  entity_1 = NULL;
  memset(entity_8, 'h', 4-1);
  entity_8[4-1]='';
  memset(entity_1, 'l', 9-1);
  entity_1[9-1]='';
  entity_3 = (char*)malloc(entity_4*sizeof(char));
  entity_3[entity_4-1]='';
  strcpy(entity_3, entity_1);
}