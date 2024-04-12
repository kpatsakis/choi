void fun()
{
  int entity_3 = 10;
  char* entity_1;
  char entity_9[entity_3] = "";
  memset(entity_9, 'c', entity_3-1);
  entity_9[entity_3-1]='0';
  entity_1 = (char*)malloc(3*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_1, entity_9, entity_3*sizeof(char));
}