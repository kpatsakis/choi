void fun()
{
  int entity_7 = 22;
  char entity_8[entity_7] = "";
  char* entity_0;
  memset(entity_8, 'H', entity_7-1);
  entity_8[entity_7-1]='0';
  entity_0 = (char*)malloc(3*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_8, entity_7*sizeof(char));
}