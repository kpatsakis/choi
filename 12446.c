void fun()
{
  int entity_6 = 85;
  char* entity_9;
  char entity_3[entity_6] = "";
  char entity_1 = 'c';
  memset(entity_3, 'y', entity_6-1);
  entity_3[entity_6-1]='0';
  entity_9 = (char*)malloc(31*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_3);
}