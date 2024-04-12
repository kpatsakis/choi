void fun()
{
  int entity_8 = 14;
  char* entity_4;
  char entity_0[80] = "";
  entity_0 = NULL;
  memset(entity_0, 'F', 80-1);
  entity_0[80-1]='';
  entity_4 = (char*)malloc(entity_8*sizeof(char));
  entity_4[entity_8-1]='';
  entity_8 = 69;
  strcpy(entity_4, entity_0);
}