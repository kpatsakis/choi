void fun()
{
  int entity_9 = 90;
  entity_9 = 90;
  char* entity_1;
  char entity_0[entity_9] = "";
  memset(entity_0, 'E', entity_9-1);
  entity_0[entity_9-1]='0';
  entity_1 = (char*)malloc(67*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_0);
}