void fun()
{
  int entity_9 = 67;
  char* entity_1;
  char entity_6[entity_9] = "";
  memset(entity_6, 'b', entity_9-1);
  entity_6[entity_9-1]='0';
  entity_1 = (char*)malloc(26*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_1, entity_6, entity_9*sizeof(char));
}