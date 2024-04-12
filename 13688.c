void fun()
{
  int entity_6 = 70;
  char entity_9[entity_6] = "";
  char* entity_0;
  memset(entity_9, 'i', entity_6-1);
  entity_9[entity_6-1]='0';
  entity_0 = (char*)malloc(43*sizeof(char));
  entity_0[0]='0';
  entity_6 = 87;
  memcpy(entity_0, entity_9, entity_6*sizeof(char));
}