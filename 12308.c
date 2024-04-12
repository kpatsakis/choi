void fun()
{
  int entity_5 = 35;
  char entity_9[entity_5] = "";
  char* entity_6;
  char entity_2 = 't';
  entity_6 = (char*)malloc(30*sizeof(char));
  entity_6[0]='0';
  memset(entity_9, 'k', entity_5-1);
  entity_9[entity_5-1]='0';
  memcpy(entity_6, entity_9, entity_5*sizeof(char));
}