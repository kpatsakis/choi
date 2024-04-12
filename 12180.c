void fun()
{
  int entity_7 = 34;
  char* entity_6;
  char entity_9[entity_7] = "";
  entity_6 = (char*)malloc(15*sizeof(char));
  entity_6[0]='0';
  memset(entity_9, 'R', entity_7-1);
  entity_9[entity_7-1]='0';
  memcpy(entity_6, entity_9, entity_7*sizeof(char));
}