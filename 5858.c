void fun()
{
  int entity_9 = 87;
  entity_9 = 87;
  char* entity_3;
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  entity_3 = (char*)malloc(91*sizeof(char));
  entity_3[91-1]='';
  memset(entity_8, 'y', entity_9-1);
  entity_8[entity_9-1]='';
  strcpy(entity_3, entity_8);
}