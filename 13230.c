void fun()
{
  int entity_9 = 2;
  int entity_7 = 31;
  char entity_1[7] = "";
  char* entity_0;
  char entity_8[65] = "";
  entity_0 = (char*)malloc(entity_9*sizeof(char));
  entity_0[0]='0';
  memset(entity_1, 't', 7-1);
  entity_1[7-1]='0';
  memset(entity_8, 'a', 65-1);
  entity_8[65-1]='0';
  entity_9 = 78;
  memcpy(entity_0, entity_8, 65*sizeof(char));
}