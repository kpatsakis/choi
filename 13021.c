void fun()
{
  int entity_9 = 40;
  int entity_0 = 7;
  char entity_6[entity_0] = "";
  char* entity_4;
  memset(entity_6, 'i', entity_0-1);
  entity_6[entity_0-1]='0';
  entity_4 = (char*)malloc(9*sizeof(char));
  entity_4[0]='0';
  entity_0 = 48;
  memcpy(entity_4, entity_6, entity_0*sizeof(char));
}