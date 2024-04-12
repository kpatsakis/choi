void fun()
{
  int entity_5 = 23;
  char entity_0[entity_5] = "";
  entity_0 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(28*sizeof(char));
  entity_1[28-1]='';
  memset(entity_0, 'I', entity_5-1);
  entity_0[entity_5-1]='';
  memcpy(entity_1, entity_0, entity_5*sizeof(char));
}