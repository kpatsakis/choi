void fun()
{
  int entity_4 = 16;
  char* entity_5;
  char entity_0[entity_4] = "";
  entity_0 = NULL;
  memset(entity_0, 'D', entity_4-1);
  entity_0[entity_4-1]='';
  entity_5 = (char*)malloc(91*sizeof(char));
  entity_5[91-1]='';
  entity_4 = 5;
  memcpy(entity_5, entity_0, entity_4*sizeof(char));
}