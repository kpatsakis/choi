void fun()
{
  int entity_8 = 14;
  char* entity_0;
  char entity_3[42] = "";
  entity_3 = NULL;
  char entity_6 = 'G';
  memset(entity_3, 'G', 42-1);
  entity_3[42-1]='';
  entity_0 = (char*)malloc(entity_8*sizeof(char));
  entity_0[entity_8-1]='';
  strcpy(entity_0, entity_3);
}