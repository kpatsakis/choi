void fun()
{
  int entity_5 = 57;
  char entity_9[entity_5] = "";
  char* entity_1;
  memset(entity_9, 'r', entity_5-1);
  entity_9[entity_5-1]='0';
  entity_1 = (char*)malloc(85*sizeof(char));
  entity_1[0]='0';
  entity_5 = 88;
  memcpy(entity_1, entity_9, entity_5*sizeof(char));
}