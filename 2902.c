void fun()
{
  int entity_8 = 9;
  char* entity_4;
  char entity_0[52] = "";
  entity_0 = NULL;
  entity_4 = (char*)malloc(entity_8*sizeof(char));
  entity_4[entity_8-1]='';
  memset(entity_0, 'H', 52-1);
  entity_0[52-1]='';
  strcpy(entity_4, entity_0);
}