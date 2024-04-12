void fun()
{
  int entity_4 = 86;
  entity_4 = 45;
  char entity_9[entity_4] = "";
  char* entity_0;
  entity_0 = (char*)malloc(97*sizeof(char));
  entity_0[0]='0';
  memset(entity_9, 'v', entity_4-1);
  entity_9[entity_4-1]='0';
  memcpy(entity_0, entity_9, entity_4*sizeof(char));
}