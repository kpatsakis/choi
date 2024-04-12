void fun()
{
  int entity_0 = 7;
  char* entity_4;
  char entity_8[entity_0] = "";
  entity_4 = (char*)malloc(86*sizeof(char));
  entity_4[0]='0';
  memset(entity_8, 'U', entity_0-1);
  entity_8[entity_0-1]='0';
  entity_0 = 20;
  memcpy(entity_4, entity_8, entity_0*sizeof(char));
}