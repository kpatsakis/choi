void fun()
{
  int entity_9 = 85;
  char* entity_5;
  char entity_0[50] = "";
  entity_0 = NULL;
  memset(entity_0, 'k', 50-1);
  entity_0[50-1]='';
  entity_5 = (char*)malloc(entity_9*sizeof(char));
  entity_5[entity_9-1]='';
  memcpy(entity_5, entity_0, 50*sizeof(char));
}