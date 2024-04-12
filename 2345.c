void fun()
{
  int entity_7 = 79;
  char entity_3[entity_7] = "";
  entity_3 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(31*sizeof(char));
  entity_9[31-1]='';
  memset(entity_3, 'H', entity_7-1);
  entity_3[entity_7-1]='';
  entity_7 = 66;
  memcpy(entity_9, entity_3, entity_7*sizeof(char));
}