void fun()
{
  int entity_3 = 41;
  char entity_9[75] = "";
  entity_9 = NULL;
  char* entity_0;
  char entity_2[entity_3] = "";
  entity_2 = NULL;
  memset(entity_9, 'k', 75-1);
  entity_9[75-1]='';
  memset(entity_2, 'h', entity_3-1);
  entity_2[entity_3-1]='';
  entity_0 = (char*)malloc(20*sizeof(char));
  entity_0[20-1]='';
  entity_2[41] = 'v';
}