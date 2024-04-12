void fun()
{
  int entity_4 = 66;
  entity_4 = 11;
  char entity_1[entity_4] = "";
  char* entity_9;
  entity_9 = (char*)malloc(5*sizeof(char));
  entity_9[0]='0';
  memset(entity_1, 'B', entity_4-1);
  entity_1[entity_4-1]='0';
  memcpy(entity_9, entity_1, entity_4*sizeof(char));
}