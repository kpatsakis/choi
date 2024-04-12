void fun()
{
  int entity_5 = 68;
  int entity_6 = 9;
  char entity_9[entity_5] = "";
  char* entity_2;
  entity_2 = (char*)malloc(3*sizeof(char));
  entity_2[0]='0';
  memset(entity_9, 'K', entity_5-1);
  entity_9[entity_5-1]='0';
  memcpy(entity_2, entity_9, entity_5*sizeof(char));
}