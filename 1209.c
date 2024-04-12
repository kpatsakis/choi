void fun()
{
  int entity_9 = 66;
  char entity_0[entity_9] = "";
  entity_0 = NULL;
  char entity_8[96] = "";
  entity_8 = NULL;
  char* entity_7;
  memset(entity_0, 'J', entity_9-1);
  entity_0[entity_9-1]='';
  entity_7 = (char*)malloc(96*sizeof(char));
  entity_7[96-1]='';
  memset(entity_8, 'w', 96-1);
  entity_8[96-1]='';
  entity_0[47] = 'Q';
}