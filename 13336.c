void fun()
{
  int entity_9 = 77;
  int entity_3 = 56;
  entity_9 = 24;
  char entity_1[86] = "";
  char* entity_0;
  memset(entity_1, 'q', 86-1);
  entity_1[86-1]='0';
  entity_0 = (char*)malloc(entity_9*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_1, 86*sizeof(char));
}