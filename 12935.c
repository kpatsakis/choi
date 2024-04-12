void fun()
{
  int entity_9 = 10;
  char* entity_0;
  char entity_4[entity_9] = "";
  char entity_2 = 'm';
  entity_0 = (char*)malloc(6*sizeof(char));
  entity_0[0]='0';
  memset(entity_4, 'f', entity_9-1);
  entity_4[entity_9-1]='0';
  strcpy(entity_0, entity_4);
}