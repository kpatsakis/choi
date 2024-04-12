void fun()
{
  int entity_3 = 25;
  int entity_5 = 33;
  char* entity_1;
  char entity_0[18] = "";
  char entity_7[entity_5] = "";
  memset(entity_0, 'h', 18-1);
  entity_0[18-1]='0';
  memset(entity_7, 'X', entity_5-1);
  entity_7[entity_5-1]='0';
  entity_1 = (char*)malloc(93*sizeof(char));
  entity_1[0]='0';
  entity_5 = 72;
  strcpy(entity_1, entity_7);
}