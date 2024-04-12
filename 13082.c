void fun()
{
  int entity_5 = 73;
  entity_5 = 95;
  char* entity_9;
  char entity_7[entity_5] = "";
  memset(entity_7, 'I', entity_5-1);
  entity_7[entity_5-1]='0';
  entity_9 = (char*)malloc(55*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_7, entity_5*sizeof(char));
}