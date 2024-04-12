void fun()
{
  int entity_2 = 39;
  int entity_5 = 44;
  entity_5 = 44;
  char entity_3[entity_5] = "";
  entity_3 = NULL;
  char* entity_0;
  char entity_9 = 'z';
  entity_0 = (char*)malloc(91*sizeof(char));
  entity_0[91-1]='';
  memset(entity_3, 'T', entity_5-1);
  entity_3[entity_5-1]='';
  strcpy(entity_0, entity_3);
}