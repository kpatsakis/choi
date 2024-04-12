void fun()
{
  int entity_0 = 7;
  entity_0 = 24;
  char entity_2[entity_0] = "";
  char* entity_9;
  memset(entity_2, 'a', entity_0-1);
  entity_2[entity_0-1]='0';
  entity_9 = (char*)malloc(69*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_2, entity_0*sizeof(char));
}