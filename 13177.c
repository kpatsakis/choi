void fun()
{
  int entity_4 = 57;
  entity_4 = 86;
  char entity_7[88] = "";
  char entity_0[40] = "";
  char* entity_9;
  char entity_3[36] = "";
  memset(entity_3, 'c', 36-1);
  entity_3[36-1]='0';
  memset(entity_7, 'R', 88-1);
  entity_7[88-1]='0';
  entity_9 = (char*)malloc(entity_4*sizeof(char));
  entity_9[0]='0';
  memset(entity_0, 'h', 40-1);
  entity_0[40-1]='0';
  memcpy(entity_9, entity_3, 36*sizeof(char));
}