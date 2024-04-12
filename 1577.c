void fun()
{
  int entity_9 = 6;
  entity_9 = 42;
  char* entity_0;
  char entity_4[43] = "";
  entity_4 = NULL;
  entity_0 = (char*)malloc(entity_9*sizeof(char));
  entity_0[entity_9-1]='';
  memset(entity_4, 'y', 43-1);
  entity_4[43-1]='';
  memcpy(entity_0, entity_4, 43*sizeof(char));
}