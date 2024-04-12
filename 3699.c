void fun()
{
  int entity_5 = 71;
  char* entity_0;
  char entity_8[88] = "";
  entity_8 = NULL;
  char entity_9 = 'p';
  char* entity_6;
  entity_0 = (char*)malloc(entity_5*sizeof(char));
  entity_0[entity_5-1]='';
  entity_6 = (char*)malloc(91*sizeof(char));
  entity_6[91-1]='';
  memset(entity_8, 'r', 88-1);
  entity_8[88-1]='';
  entity_5 = 59;
  strcpy(entity_0, entity_8);
}