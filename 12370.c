void fun()
{
  int entity_6 = 4;
  int entity_1 = 97;
  char entity_9[86] = "";
  char entity_5 = 'W';
  char entity_7[entity_1] = "";
  char* entity_4;
  memset(entity_9, 'z', 86-1);
  entity_9[86-1]='0';
  memset(entity_7, 'v', entity_1-1);
  entity_7[entity_1-1]='0';
  entity_4 = (char*)malloc(72*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_7, entity_1*sizeof(char));
}