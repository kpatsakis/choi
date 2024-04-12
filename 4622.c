void fun()
{
  int entity_7 = 60;
  int entity_9 = 80;
  char entity_5[24] = "";
  entity_5 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(entity_7*sizeof(char));
  entity_0[entity_7-1]='';
  memset(entity_5, 'B', 24-1);
  entity_5[24-1]='';
  memcpy(entity_0, entity_5, 24*sizeof(char));
}