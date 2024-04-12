void fun()
{
  int entity_2 = 78;
  char* entity_4;
  char entity_0[5] = "";
  char entity_1[6] = "";
  char* entity_9;
  memset(entity_0, 'd', 5-1);
  entity_0[5-1]='0';
  entity_9 = (char*)malloc(90*sizeof(char));
  entity_9[0]='0';
  memset(entity_1, 'f', 6-1);
  entity_1[6-1]='0';
  entity_4 = (char*)malloc(20*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_9, entity_0, 5*sizeof(char));
}