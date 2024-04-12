void fun()
{
  int entity_9 = 7;
  char entity_0[99] = "";
  entity_0 = NULL;
  char* entity_3;
  char entity_7[86] = "";
  entity_7 = NULL;
  char* entity_6;
  memset(entity_7, 'u', 86-1);
  entity_7[86-1]='';
  entity_6 = (char*)malloc(91*sizeof(char));
  entity_6[91-1]='';
  memset(entity_0, 'l', 99-1);
  entity_0[99-1]='';
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[entity_9-1]='';
  strcpy(entity_3, entity_0);
}