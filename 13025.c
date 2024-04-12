void fun()
{
  int entity_4 = 45;
  entity_4 = 11;
  char entity_9[entity_4] = "";
  char* entity_6;
  memset(entity_9, 'o', entity_4-1);
  entity_9[entity_4-1]='0';
  entity_6 = (char*)malloc(93*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_6, entity_9, entity_4*sizeof(char));
}