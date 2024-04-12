void fun()
{
  int entity_4 = 22;
  char entity_8[20] = "";
  entity_8 = NULL;
  char* entity_5;
  char entity_1[21] = "";
  entity_1 = NULL;
  entity_5 = (char*)malloc(entity_4*sizeof(char));
  entity_5[entity_4-1]='';
  memset(entity_8, 'Z', 20-1);
  entity_8[20-1]='';
  memset(entity_1, 'v', 21-1);
  entity_1[21-1]='';
  entity_4 = 3;
  strcpy(entity_5, entity_1);
}