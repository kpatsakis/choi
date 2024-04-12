void fun()
{
  int entity_6 = 68;
  entity_6 = 66;
  char* entity_8;
  char entity_1[30] = "";
  entity_1 = NULL;
  entity_8 = (char*)malloc(entity_6*sizeof(char));
  entity_8[entity_6-1]='';
  memset(entity_1, 'P', 30-1);
  entity_1[30-1]='';
  strcpy(entity_8, entity_1);
}