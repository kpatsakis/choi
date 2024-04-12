void fun()
{
  int entity_8 = 98;
  char* entity_1;
  char entity_9[entity_8] = "";
  char entity_0[57] = "";
  char entity_3 = 'G';
  memset(entity_0, 'U', 57-1);
  entity_0[57-1]='0';
  entity_1 = (char*)malloc(24*sizeof(char));
  entity_1[0]='0';
  memset(entity_9, 'j', entity_8-1);
  entity_9[entity_8-1]='0';
  entity_8 = 67;
  memcpy(entity_1, entity_9, entity_8*sizeof(char));
}