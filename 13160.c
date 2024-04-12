void fun()
{
  int entity_1 = 27;
  entity_1 = 27;
  char* entity_2;
  char entity_9[entity_1] = "";
  entity_2 = (char*)malloc(55*sizeof(char));
  entity_2[0]='0';
  memset(entity_9, 'a', entity_1-1);
  entity_9[entity_1-1]='0';
  strcpy(entity_2, entity_9);
}