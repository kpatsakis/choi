void fun()
{
  int entity_1 = 19;
  int entity_0 = 50;
  int entity_9 = 95;
  char entity_5[entity_0] = "";
  char* entity_2;
  memset(entity_5, 'k', entity_0-1);
  entity_5[entity_0-1]='0';
  entity_2 = (char*)malloc(98*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_2, entity_5);
}