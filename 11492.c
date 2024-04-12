void fun()
{
  int entity_1 = 26;
  char entity_2[80] = "";
  char entity_9[32] = "";
  char* entity_4;
  entity_4 = (char*)malloc(38*sizeof(char));
  entity_4[0]='0';
  memset(entity_9, 'd', 32-1);
  entity_9[32-1]='0';
  memset(entity_2, 'I', 80-1);
  entity_2[80-1]='0';
  memcpy(entity_4, entity_9, 32*sizeof(char));
}