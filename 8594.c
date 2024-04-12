void fun()
{
  int entity_6 = 24;
  char entity_1 = 'v';
  char* entity_0;
  char entity_9[34] = "";
  entity_9 = NULL;
  entity_0 = (char*)malloc(entity_6*sizeof(char));
  entity_0[entity_6-1]='';
  memset(entity_9, 'S', 34-1);
  entity_9[34-1]='';
  memcpy(entity_0, entity_9, 34*sizeof(char));
}