void fun()
{
  int entity_4 = 2;
  char entity_0[entity_4] = "";
  char* entity_1;
  entity_1 = (char*)malloc(32*sizeof(char));
  entity_1[0]='0';
  memset(entity_0, 'j', entity_4-1);
  entity_0[entity_4-1]='0';
  memcpy(entity_1, entity_0, entity_4*sizeof(char));
}