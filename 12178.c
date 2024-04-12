void fun()
{
  int entity_0 = 9;
  char entity_1[entity_0] = "";
  char* entity_8;
  char entity_3[77] = "";
  memset(entity_3, 't', 77-1);
  entity_3[77-1]='0';
  memset(entity_1, 'a', entity_0-1);
  entity_1[entity_0-1]='0';
  entity_8 = (char*)malloc(27*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_8, entity_1, entity_0*sizeof(char));
}