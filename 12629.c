void fun()
{
  int entity_9 = 93;
  char* entity_4;
  char entity_1[entity_9] = "";
  char* entity_5;
  memset(entity_1, 'e', entity_9-1);
  entity_1[entity_9-1]='0';
  entity_4 = (char*)malloc(28*sizeof(char));
  entity_4[0]='0';
  entity_5 = (char*)malloc(21*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_1, entity_9*sizeof(char));
}