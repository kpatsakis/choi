void fun()
{
  int entity_9 = 18;
  entity_9 = 17;
  char entity_0[entity_9] = "";
  char* entity_2;
  memset(entity_0, 'm', entity_9-1);
  entity_0[entity_9-1]='0';
  entity_2 = (char*)malloc(32*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_0, entity_9*sizeof(char));
}