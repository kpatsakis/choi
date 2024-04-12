void fun()
{
  int entity_5 = 25;
  char* entity_9;
  char entity_0[entity_5] = "";
  entity_0 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(74*sizeof(char));
  entity_6[74-1]='';
  memset(entity_0, 'i', entity_5-1);
  entity_0[entity_5-1]='';
  entity_9 = (char*)malloc(75*sizeof(char));
  entity_9[75-1]='';
  memcpy(entity_6, entity_0, entity_5*sizeof(char));
}