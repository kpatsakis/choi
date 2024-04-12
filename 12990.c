void fun()
{
  int entity_5 = 44;
  char* entity_4;
  char entity_0 = 'T';
  char entity_9[entity_5] = "";
  char* entity_8;
  entity_8 = (char*)malloc(37*sizeof(char));
  entity_8[0]='0';
  memset(entity_9, 'c', entity_5-1);
  entity_9[entity_5-1]='0';
  entity_4 = (char*)malloc(66*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_9, entity_5*sizeof(char));
}