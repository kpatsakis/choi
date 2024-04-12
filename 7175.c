void fun()
{
  int entity_3 = 85;
  char entity_5 = 'c';
  char* entity_4;
  char entity_8[14] = "";
  entity_8 = NULL;
  memset(entity_8, 'Y', 14-1);
  entity_8[14-1]='';
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[entity_3-1]='';
  strcpy(entity_4, entity_8);
}