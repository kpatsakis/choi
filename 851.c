void fun()
{
  int entity_3 = 78;
  char entity_0[4] = "";
  entity_0 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(entity_3*sizeof(char));
  entity_8[entity_3-1]='';
  memset(entity_0, 'x', 4-1);
  entity_0[4-1]='';
  strcpy(entity_8, entity_0);
}