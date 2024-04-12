void fun()
{
  int entity_9 = 44;
  int entity_4 = 71;
  entity_9 = 91;
  char entity_5[entity_9] = "";
  entity_5 = NULL;
  char* entity_8;
  char entity_3 = 'p';
  memset(entity_5, 'z', entity_9-1);
  entity_5[entity_9-1]='';
  entity_8 = (char*)malloc(38*sizeof(char));
  entity_8[38-1]='';
  entity_5[68] = 'v';
}