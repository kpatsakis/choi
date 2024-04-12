void fun()
{
  int entity_8 = 28;
  entity_8 = 28;
  char entity_9[entity_8] = "";
  char* entity_7;
  memset(entity_9, 'T', entity_8-1);
  entity_9[entity_8-1]='0';
  entity_7 = (char*)malloc(43*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_9);
}