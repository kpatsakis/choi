void fun()
{
  int entity_6 = 54;
  char entity_0[entity_6] = "";
  char entity_8 = 'Q';
  char* entity_9;
  char entity_2 = 'm';
  entity_9 = (char*)malloc(18*sizeof(char));
  entity_9[0]='0';
  memset(entity_0, 'M', entity_6-1);
  entity_0[entity_6-1]='0';
  memcpy(entity_9, entity_0, entity_6*sizeof(char));
}