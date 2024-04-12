void fun()
{
  int entity_3 = 76;
  int entity_7 = 21;
  int entity_4 = 41;
  char* entity_9;
  char entity_1[33] = "";
  memset(entity_1, 'h', 33-1);
  entity_1[33-1]='0';
  entity_9 = (char*)malloc(entity_7*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_1, 33*sizeof(char));
}