void fun()
{
  int entity_2 = 62;
  int entity_1 = 62;
  entity_2 = 9;
  char* entity_6;
  char entity_5 = 'p';
  char entity_4[91] = "";
  entity_4 = NULL;
  entity_6 = (char*)malloc(entity_2*sizeof(char));
  entity_6[entity_2-1]='';
  memset(entity_4, 'w', 91-1);
  entity_4[91-1]='';
  strcpy(entity_6, entity_4);
}