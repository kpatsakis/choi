void fun()
{
  int entity_9 = 93;
  entity_9 = 4;
  char entity_0[98] = "";
  entity_0 = NULL;
  char entity_8 = 'V';
  char* entity_6;
  memset(entity_0, 'o', 98-1);
  entity_0[98-1]='';
  entity_6 = (char*)malloc(entity_9*sizeof(char));
  entity_6[entity_9-1]='';
  memcpy(entity_6, entity_0, 98*sizeof(char));
}