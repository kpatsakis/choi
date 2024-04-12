void fun()
{
  int entity_0 = 28;
  int entity_5 = 49;
  char entity_2[entity_0] = "";
  entity_2 = NULL;
  char* entity_6;
  char entity_9[49] = "";
  entity_9 = NULL;
  entity_6 = (char*)malloc(67*sizeof(char));
  entity_6[67-1]='';
  memset(entity_2, 'A', entity_0-1);
  entity_2[entity_0-1]='';
  memset(entity_9, 'Y', 49-1);
  entity_9[49-1]='';
  entity_0 = 28;
  entity_2[90] = 'a';
}