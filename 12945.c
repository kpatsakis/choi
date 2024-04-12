void fun()
{
  int entity_5 = 30;
  int entity_0 = 50;
  char entity_6[entity_5] = "";
  char entity_1 = 'f';
  char* entity_9;
  memset(entity_6, 'N', entity_5-1);
  entity_6[entity_5-1]='0';
  entity_9 = (char*)malloc(18*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_6, entity_5*sizeof(char));
}