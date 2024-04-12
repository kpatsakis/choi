void fun()
{
  int entity_6 = 9;
  char entity_5[81] = "";
  entity_5 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(entity_6*sizeof(char));
  entity_8[entity_6-1]='';
  memset(entity_5, 'C', 81-1);
  entity_5[81-1]='';
  strcpy(entity_8, entity_5);
}