void fun()
{
  int entity_6 = 34;
  int entity_9 = 39;
  char entity_0[17] = "";
  entity_0 = NULL;
  char* entity_3;
  memset(entity_0, 'm', 17-1);
  entity_0[17-1]='';
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[entity_9-1]='';
  memcpy(entity_3, entity_0, 17*sizeof(char));
}