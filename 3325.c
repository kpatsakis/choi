void fun()
{
  int entity_0 = 60;
  char* entity_6;
  char entity_1[entity_0] = "";
  entity_1 = NULL;
  char entity_7[88] = "";
  entity_7 = NULL;
  memset(entity_7, 'k', 88-1);
  entity_7[88-1]='';
  memset(entity_1, 'G', entity_0-1);
  entity_1[entity_0-1]='';
  entity_6 = (char*)malloc(91*sizeof(char));
  entity_6[91-1]='';
  entity_0 = 79;
  strcpy(entity_6, entity_1);
}