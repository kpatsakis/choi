void fun()
{
  int entity_2 = 19;
  char entity_9[entity_2] = "";
  char* entity_4;
  entity_4 = (char*)malloc(22*sizeof(char));
  entity_4[0]='0';
  memset(entity_9, 'K', entity_2-1);
  entity_9[entity_2-1]='0';
  strcpy(entity_4, entity_9);
}