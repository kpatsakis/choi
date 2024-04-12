void fun()
{
  int entity_3 = 18;
  int entity_9 = 9;
  char* entity_5;
  char entity_4[entity_9] = "";
  entity_5 = (char*)malloc(93*sizeof(char));
  entity_5[0]='0';
  memset(entity_4, 'k', entity_9-1);
  entity_4[entity_9-1]='0';
  strcpy(entity_5, entity_4);
}