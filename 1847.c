void fun()
{
  int entity_6 = 64;
  char* entity_0;
  char entity_8[entity_6] = "";
  entity_8 = NULL;
  memset(entity_8, 'H', entity_6-1);
  entity_8[entity_6-1]='';
  entity_0 = (char*)malloc(59*sizeof(char));
  entity_0[59-1]='';
  strcpy(entity_0, entity_8);
}