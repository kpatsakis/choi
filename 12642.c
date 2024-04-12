void fun()
{
  int entity_8 = 45;
  int entity_5 = 46;
  char* entity_9;
  char* entity_6;
  char entity_4[entity_5] = "";
  entity_6 = (char*)malloc(24*sizeof(char));
  entity_6[0]='0';
  memset(entity_4, 'G', entity_5-1);
  entity_4[entity_5-1]='0';
  entity_9 = (char*)malloc(49*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_6, entity_4);
}