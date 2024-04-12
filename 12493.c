void fun()
{
  int entity_9 = 94;
  int entity_0 = 79;
  char entity_1[entity_9] = "";
  char* entity_4;
  char entity_6[58] = "";
  entity_4 = (char*)malloc(63*sizeof(char));
  entity_4[0]='0';
  memset(entity_6, 'd', 58-1);
  entity_6[58-1]='0';
  memset(entity_1, 'r', entity_9-1);
  entity_1[entity_9-1]='0';
  strcpy(entity_4, entity_1);
}