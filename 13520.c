void fun()
{
  int entity_3 = 87;
  char entity_8[entity_3] = "";
  char* entity_0;
  memset(entity_8, 'x', entity_3-1);
  entity_8[entity_3-1]='0';
  entity_0 = (char*)malloc(11*sizeof(char));
  entity_0[0]='0';
  entity_3 = 31;
  memcpy(entity_0, entity_8, entity_3*sizeof(char));
}