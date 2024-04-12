void fun()
{
  int entity_3 = 64;
  char entity_7[entity_3] = "";
  entity_7 = NULL;
  char* entity_8;
  char entity_0[55] = "";
  entity_0 = NULL;
  memset(entity_7, 'l', entity_3-1);
  entity_7[entity_3-1]='';
  memset(entity_0, 'r', 55-1);
  entity_0[55-1]='';
  entity_8 = (char*)malloc(39*sizeof(char));
  entity_8[39-1]='';
  strcpy(entity_8, entity_7);
}