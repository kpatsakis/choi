void fun()
{
  int entity_6 = 3;
  entity_6 = 3;
  char entity_5[entity_6] = "";
  char* entity_9;
  memset(entity_5, 'p', entity_6-1);
  entity_5[entity_6-1]='0';
  entity_9 = (char*)malloc(57*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_5);
}