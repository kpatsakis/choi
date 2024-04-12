void fun()
{
  int entity_9 = 11;
  char* entity_0;
  char entity_4[entity_9] = "";
  entity_0 = (char*)malloc(71*sizeof(char));
  entity_0[0]='0';
  memset(entity_4, 'z', entity_9-1);
  entity_4[entity_9-1]='0';
  memcpy(entity_0, entity_4, entity_9*sizeof(char));
}