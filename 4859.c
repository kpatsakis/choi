void fun()
{
  int entity_7 = 86;
  char* entity_9;
  char entity_0[entity_7] = "";
  entity_0 = NULL;
  char* entity_3;
  entity_9 = (char*)malloc(98*sizeof(char));
  entity_9[98-1]='';
  entity_3 = (char*)malloc(27*sizeof(char));
  entity_3[27-1]='';
  memset(entity_0, 'L', entity_7-1);
  entity_0[entity_7-1]='';
  memcpy(entity_9, entity_0, entity_7*sizeof(char));
}