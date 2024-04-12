void fun()
{
  int entity_5 = 55;
  char entity_8[entity_5] = "";
  char* entity_0;
  entity_0 = (char*)malloc(72*sizeof(char));
  entity_0[0]='0';
  memset(entity_8, 'f', entity_5-1);
  entity_8[entity_5-1]='0';
  memcpy(entity_0, entity_8, entity_5*sizeof(char));
}