void fun()
{
  int entity_7 = 87;
  char* entity_0;
  char entity_8[86] = "";
  entity_8 = NULL;
  memset(entity_8, 'w', 86-1);
  entity_8[86-1]='';
  entity_0 = (char*)malloc(entity_7*sizeof(char));
  entity_0[entity_7-1]='';
  memcpy(entity_0, entity_8, 86*sizeof(char));
}