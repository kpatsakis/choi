void fun()
{
  int entity_3 = 66;
  int entity_7 = 51;
  entity_7 = 88;
  char entity_9[34] = "";
  entity_9 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(entity_7*sizeof(char));
  entity_0[entity_7-1]='';
  memset(entity_9, 'J', 34-1);
  entity_9[34-1]='';
  memcpy(entity_0, entity_9, 34*sizeof(char));
}