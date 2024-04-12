void fun()
{
  int entity_7 = 64;
  char* entity_0;
  char entity_4[entity_7] = "";
  entity_4 = NULL;
  entity_0 = (char*)malloc(59*sizeof(char));
  entity_0[59-1]='';
  memset(entity_4, 'l', entity_7-1);
  entity_4[entity_7-1]='';
  strcpy(entity_0, entity_4);
}