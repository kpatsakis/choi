void fun()
{
  int entity_9 = 71;
  char entity_0[65] = "";
  entity_0 = NULL;
  char* entity_3;
  memset(entity_0, 'S', 65-1);
  entity_0[65-1]='';
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[entity_9-1]='';
  memcpy(entity_3, entity_0, 65*sizeof(char));
}