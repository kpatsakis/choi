void fun()
{
  int entity_4 = 8;
  int entity_6 = 7;
  char entity_0[entity_4] = "";
  entity_0 = NULL;
  char* entity_7;
  char entity_9[34] = "";
  entity_9 = NULL;
  memset(entity_0, 'K', entity_4-1);
  entity_0[entity_4-1]='';
  entity_7 = (char*)malloc(80*sizeof(char));
  entity_7[80-1]='';
  memset(entity_9, 'F', 34-1);
  entity_9[34-1]='';
  entity_0[9] = 'B';
}