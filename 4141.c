void fun()
{
  int entity_4 = 67;
  entity_4 = 11;
  char entity_3[entity_4] = "";
  entity_3 = NULL;
  char* entity_9;
  memset(entity_3, 'M', entity_4-1);
  entity_3[entity_4-1]='';
  entity_9 = (char*)malloc(89*sizeof(char));
  entity_9[89-1]='';
  memcpy(entity_9, entity_3, entity_4*sizeof(char));
}