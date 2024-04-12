void fun()
{
  int entity_8 = 21;
  char entity_1[88] = "";
  entity_1 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(entity_8*sizeof(char));
  entity_0[entity_8-1]='';
  memset(entity_1, 'p', 88-1);
  entity_1[88-1]='';
  entity_8 = 24;
  strcpy(entity_0, entity_1);
}