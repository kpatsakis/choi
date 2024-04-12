void fun()
{
  int entity_3 = 7;
  int entity_9 = 20;
  char entity_5[41] = "";
  entity_5 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(entity_3*sizeof(char));
  entity_0[entity_3-1]='';
  memset(entity_5, 'V', 41-1);
  entity_5[41-1]='';
  entity_3 = 3;
  memcpy(entity_0, entity_5, 41*sizeof(char));
}