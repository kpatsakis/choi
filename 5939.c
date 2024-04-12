void fun()
{
  int entity_8 = 86;
  char* entity_7;
  char entity_1[91] = "";
  entity_1 = NULL;
  memset(entity_1, 'n', 91-1);
  entity_1[91-1]='';
  entity_7 = (char*)malloc(entity_8*sizeof(char));
  entity_7[entity_8-1]='';
  strcpy(entity_7, entity_1);
}