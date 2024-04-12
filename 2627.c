void fun()
{
  int entity_9 = 36;
  entity_9 = 20;
  char entity_0[entity_9] = "";
  entity_0 = NULL;
  char* entity_5;
  memset(entity_0, 'L', entity_9-1);
  entity_0[entity_9-1]='';
  entity_5 = (char*)malloc(25*sizeof(char));
  entity_5[25-1]='';
  memcpy(entity_5, entity_0, entity_9*sizeof(char));
}