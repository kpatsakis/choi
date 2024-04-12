void fun()
{
  int entity_1 = 93;
  char entity_8 = 'f';
  char* entity_2;
  char entity_7[23] = "";
  char entity_9[28] = "";
  memset(entity_9, 'i', 28-1);
  entity_9[28-1]='0';
  memset(entity_7, 'm', 23-1);
  entity_7[23-1]='0';
  entity_2 = (char*)malloc(entity_1*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_7, 23*sizeof(char));
}