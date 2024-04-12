void fun()
{
  int entity_9 = 98;
  int entity_4 = 86;
  char* entity_0;
  char entity_7[49] = "";
  char entity_3[entity_4] = "";
  entity_0 = (char*)malloc(63*sizeof(char));
  entity_0[0]='0';
  memset(entity_7, 'y', 49-1);
  entity_7[49-1]='0';
  memset(entity_3, 'j', entity_4-1);
  entity_3[entity_4-1]='0';
  memcpy(entity_0, entity_3, entity_4*sizeof(char));
}