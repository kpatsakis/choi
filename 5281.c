void fun()
{
  int entity_5 = 87;
  int entity_1 = 91;
  char entity_8[entity_5] = "";
  entity_8 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(6*sizeof(char));
  entity_0[6-1]='';
  memset(entity_8, 'Z', entity_5-1);
  entity_8[entity_5-1]='';
  strcpy(entity_0, entity_8);
}