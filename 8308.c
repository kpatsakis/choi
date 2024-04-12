void fun()
{
  int entity_2 = 73;
  char entity_0[23] = "";
  entity_0 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(entity_2*sizeof(char));
  entity_9[entity_2-1]='';
  memset(entity_0, 'F', 23-1);
  entity_0[23-1]='';
  entity_2 = 81;
  memcpy(entity_9, entity_0, 23*sizeof(char));
}