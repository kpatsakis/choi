void fun()
{
  int entity_5 = 41;
  entity_5 = 42;
  char* entity_9;
  char entity_0[entity_5] = "";
  entity_0 = NULL;
  char* entity_7;
  char entity_3[81] = "";
  entity_3 = NULL;
  entity_9 = (char*)malloc(48*sizeof(char));
  entity_9[48-1]='';
  memset(entity_3, 'p', 81-1);
  entity_3[81-1]='';
  memset(entity_0, 'w', entity_5-1);
  entity_0[entity_5-1]='';
  entity_7 = (char*)malloc(11*sizeof(char));
  entity_7[11-1]='';
  entity_0[31] = 'E';
}