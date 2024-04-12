void fun()
{
  int entity_4 = 10;
  entity_4 = 21;
  char entity_1[56] = "";
  char entity_2[98] = "";
  char entity_8 = 'K';
  char* entity_9;
  char entity_7[7] = "";
  memset(entity_1, 'B', 56-1);
  entity_1[56-1]='0';
  memset(entity_2, 'i', 98-1);
  entity_2[98-1]='0';
  memset(entity_7, 'm', 7-1);
  entity_7[7-1]='0';
  entity_9 = (char*)malloc(entity_4*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_2, 98*sizeof(char));
}