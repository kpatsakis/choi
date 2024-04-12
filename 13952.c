void fun()
{
  int entity_4 = 74;
  int entity_9 = 37;
  entity_9 = 53;
  char* entity_7;
  char entity_1[entity_9] = "";
  char entity_8 = 'Z';
  memset(entity_1, 'c', entity_9-1);
  entity_1[entity_9-1]='0';
  entity_7 = (char*)malloc(37*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_1, entity_9*sizeof(char));
}