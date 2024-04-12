void fun()
{
  int entity_0 = 71;
  char* entity_4;
  char entity_7[49] = "";
  entity_7 = NULL;
  entity_4 = (char*)malloc(entity_0*sizeof(char));
  entity_4[entity_0-1]='';
  memset(entity_7, 'x', 49-1);
  entity_7[49-1]='';
  memcpy(entity_4, entity_7, 49*sizeof(char));
}