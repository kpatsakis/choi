void fun()
{
  int entity_3 = 31;
  int entity_0 = 72;
  char* entity_6;
  char entity_4[entity_0] = "";
  entity_6 = (char*)malloc(38*sizeof(char));
  entity_6[0]='0';
  memset(entity_4, 'U', entity_0-1);
  entity_4[entity_0-1]='0';
  entity_0 = 62;
  memcpy(entity_6, entity_4, entity_0*sizeof(char));
}