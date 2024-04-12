void fun()
{
  int entity_8 = 5;
  char entity_0 = 'X';
  char entity_3[41] = "";
  char* entity_2;
  char entity_5[32] = "";
  char entity_9[20] = "";
  entity_2 = (char*)malloc(entity_8*sizeof(char));
  entity_2[0]='0';
  memset(entity_9, 'k', 20-1);
  entity_9[20-1]='0';
  memset(entity_3, 'B', 41-1);
  entity_3[41-1]='0';
  memset(entity_5, 'Y', 32-1);
  entity_5[32-1]='0';
  memcpy(entity_2, entity_5, 32*sizeof(char));
}