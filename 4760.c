void fun()
{
  int entity_5 = 17;
  int entity_9 = 36;
  entity_5 = 75;
  char entity_0[entity_5] = "";
  entity_0 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(87*sizeof(char));
  entity_4[87-1]='';
  memset(entity_0, 'I', entity_5-1);
  entity_0[entity_5-1]='';
  entity_0[77] = 't';
}