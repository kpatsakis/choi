void fun()
{
  int entity_4 = 38;
  char entity_3[51] = "";
  entity_3 = NULL;
  char* entity_0;
  memset(entity_3, 'x', 51-1);
  entity_3[51-1]='';
  entity_0 = (char*)malloc(entity_4*sizeof(char));
  entity_0[entity_4-1]='';
  entity_4 = 79;
  memcpy(entity_0, entity_3, 51*sizeof(char));
}