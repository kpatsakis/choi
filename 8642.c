void fun()
{
  int entity_7 = 77;
  char entity_8 = 'd';
  char entity_3[91] = "";
  entity_3 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(entity_7*sizeof(char));
  entity_5[entity_7-1]='';
  memset(entity_3, 'U', 91-1);
  entity_3[91-1]='';
  strcpy(entity_5, entity_3);
}