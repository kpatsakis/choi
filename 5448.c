void fun()
{
  int entity_2 = 68;
  char* entity_9;
  char entity_0[entity_2] = "";
  entity_0 = NULL;
  char* entity_5;
  entity_9 = (char*)malloc(4*sizeof(char));
  entity_9[4-1]='';
  entity_5 = (char*)malloc(56*sizeof(char));
  entity_5[56-1]='';
  memset(entity_0, 'j', entity_2-1);
  entity_0[entity_2-1]='';
  memcpy(entity_9, entity_0, entity_2*sizeof(char));
}