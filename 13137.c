void fun()
{
  int entity_5 = 39;
  entity_5 = 39;
  char* entity_1;
  char entity_9[entity_5] = "";
  memset(entity_9, 'o', entity_5-1);
  entity_9[entity_5-1]='0';
  entity_1 = (char*)malloc(21*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_9);
}