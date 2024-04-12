void fun()
{
  int entity_8 = 53;
  char entity_3[8] = "";
  entity_3 = NULL;
  char* entity_0;
  char entity_4 = 'l';
  memset(entity_3, 'n', 8-1);
  entity_3[8-1]='';
  entity_0 = (char*)malloc(entity_8*sizeof(char));
  entity_0[entity_8-1]='';
  entity_8 = 96;
  strcpy(entity_0, entity_3);
}