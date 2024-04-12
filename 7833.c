void fun()
{
  int entity_5 = 55;
  char* entity_8;
  char entity_3[81] = "";
  entity_3 = NULL;
  entity_8 = (char*)malloc(entity_5*sizeof(char));
  entity_8[entity_5-1]='';
  memset(entity_3, 'C', 81-1);
  entity_3[81-1]='';
  strcpy(entity_8, entity_3);
}