void fun()
{
  int entity_1 = 39;
  entity_1 = 74;
  char entity_4[61] = "";
  char* entity_2;
  char entity_9[55] = "";
  char entity_5[94] = "";
  entity_2 = (char*)malloc(entity_1*sizeof(char));
  entity_2[0]='0';
  memset(entity_9, 'B', 55-1);
  entity_9[55-1]='0';
  memset(entity_5, 'w', 94-1);
  entity_5[94-1]='0';
  memset(entity_4, 'N', 61-1);
  entity_4[61-1]='0';
  memcpy(entity_2, entity_9, 55*sizeof(char));
}