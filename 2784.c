void fun()
{
  int entity_9 = 82;
  char entity_4[84] = "";
  entity_4 = NULL;
  char* entity_6;
  char entity_0[entity_9] = "";
  entity_0 = NULL;
  memset(entity_0, 'I', entity_9-1);
  entity_0[entity_9-1]='';
  entity_6 = (char*)malloc(1*sizeof(char));
  entity_6[1-1]='';
  memset(entity_4, 'v', 84-1);
  entity_4[84-1]='';
  memcpy(entity_6, entity_0, entity_9*sizeof(char));
}