void fun()
{
  int entity_9 = 13;
  int entity_6 = 84;
  char* entity_0;
  char entity_1[50] = "";
  entity_1 = NULL;
  memset(entity_1, 'c', 50-1);
  entity_1[50-1]='';
  entity_0 = (char*)malloc(entity_6*sizeof(char));
  entity_0[entity_6-1]='';
  memcpy(entity_0, entity_1, 50*sizeof(char));
}