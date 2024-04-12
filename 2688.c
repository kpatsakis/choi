void fun()
{
  int entity_9 = 94;
  char* entity_5;
  char entity_0[43] = "";
  entity_0 = NULL;
  entity_5 = (char*)malloc(entity_9*sizeof(char));
  entity_5[entity_9-1]='';
  memset(entity_0, 'L', 43-1);
  entity_0[43-1]='';
  entity_9 = 55;
  memcpy(entity_5, entity_0, 43*sizeof(char));
}