void fun()
{
  int entity_6 = 35;
  char* entity_4;
  char entity_9[entity_6] = "";
  entity_4 = (char*)malloc(27*sizeof(char));
  entity_4[0]='0';
  memset(entity_9, 'i', entity_6-1);
  entity_9[entity_6-1]='0';
  memcpy(entity_4, entity_9, entity_6*sizeof(char));
}