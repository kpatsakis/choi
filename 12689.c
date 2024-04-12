void fun()
{
  int entity_7 = 77;
  int entity_9 = 34;
  char entity_1[entity_7] = "";
  char* entity_4;
  memset(entity_1, 'J', entity_7-1);
  entity_1[entity_7-1]='0';
  entity_4 = (char*)malloc(63*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_1, entity_7*sizeof(char));
}