void fun()
{
  int entity_0 = 83;
  char* entity_9;
  char entity_3 = 'A';
  char entity_4[entity_0] = "";
  entity_9 = (char*)malloc(39*sizeof(char));
  entity_9[0]='0';
  memset(entity_4, 'i', entity_0-1);
  entity_4[entity_0-1]='0';
  entity_0 = 53;
  memcpy(entity_9, entity_4, entity_0*sizeof(char));
}