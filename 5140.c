void fun()
{
  int entity_5 = 1;
  int entity_7 = 92;
  char entity_4 = 'n';
  char* entity_8;
  char entity_1[28] = "";
  entity_1 = NULL;
  entity_8 = (char*)malloc(entity_5*sizeof(char));
  entity_8[entity_5-1]='';
  memset(entity_1, 'i', 28-1);
  entity_1[28-1]='';
  strcpy(entity_8, entity_1);
}