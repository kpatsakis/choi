void fun()
{
  int entity_2 = 40;
  char entity_6[41] = "";
  entity_6 = NULL;
  char* entity_9;
  memset(entity_6, 'm', 41-1);
  entity_6[41-1]='';
  entity_9 = (char*)malloc(entity_2*sizeof(char));
  entity_9[entity_2-1]='';
  memcpy(entity_9, entity_6, 41*sizeof(char));
}