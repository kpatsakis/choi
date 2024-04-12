void fun()
{
  int entity_6 = 55;
  char entity_5[entity_6] = "";
  char* entity_9;
  memset(entity_5, 'w', entity_6-1);
  entity_5[entity_6-1]='0';
  entity_9 = (char*)malloc(7*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_5);
}