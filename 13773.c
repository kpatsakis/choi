void fun()
{
  int entity_9 = 86;
  entity_9 = 86;
  char entity_7[entity_9] = "";
  char* entity_1;
  entity_1 = (char*)malloc(50*sizeof(char));
  entity_1[0]='0';
  memset(entity_7, 'C', entity_9-1);
  entity_7[entity_9-1]='0';
  strcpy(entity_1, entity_7);
}