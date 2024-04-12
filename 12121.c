void fun()
{
  int entity_3 = 6;
  char* entity_7;
  char entity_9[entity_3] = "";
  memset(entity_9, 'X', entity_3-1);
  entity_9[entity_3-1]='0';
  entity_7 = (char*)malloc(99*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_9);
}