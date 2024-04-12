void fun()
{
  int entity_7 = 11;
  int entity_9 = 65;
  entity_9 = 65;
  char entity_8[entity_9] = "";
  char* entity_6;
  memset(entity_8, 'f', entity_9-1);
  entity_8[entity_9-1]='0';
  entity_6 = (char*)malloc(93*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_6, entity_8);
}