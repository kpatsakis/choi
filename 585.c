void fun()
{
  int entity_8 = 38;
  entity_8 = 69;
  char entity_2[15] = "";
  entity_2 = NULL;
  char entity_3[72] = "";
  entity_3 = NULL;
  char* entity_0;
  memset(entity_3, 's', 72-1);
  entity_3[72-1]='';
  memset(entity_2, 'n', 15-1);
  entity_2[15-1]='';
  entity_0 = (char*)malloc(entity_8*sizeof(char));
  entity_0[entity_8-1]='';
  strcpy(entity_0, entity_2);
}