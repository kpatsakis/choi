void fun()
{
  int entity_9 = 25;
  char entity_8[56] = "";
  char entity_7[32] = "";
  char entity_3[84] = "";
  char* entity_1;
  memset(entity_8, 'k', 56-1);
  entity_8[56-1]='0';
  memset(entity_7, 'y', 32-1);
  entity_7[32-1]='0';
  entity_1 = (char*)malloc(43*sizeof(char));
  entity_1[0]='0';
  memset(entity_3, 'R', 84-1);
  entity_3[84-1]='0';
  strcpy(entity_1, entity_3);
}