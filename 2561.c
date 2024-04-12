void fun()
{
  int entity_6 = 6;
  entity_6 = 100;
  char* entity_9;
  char entity_0[20] = "";
  entity_0 = NULL;
  memset(entity_0, 'q', 20-1);
  entity_0[20-1]='';
  entity_9 = (char*)malloc(entity_6*sizeof(char));
  entity_9[entity_6-1]='';
  memcpy(entity_9, entity_0, 20*sizeof(char));
}