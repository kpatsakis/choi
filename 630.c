void fun()
{
  int entity_3 = 71;
  char entity_9[90] = "";
  entity_9 = NULL;
  char* entity_8;
  memset(entity_9, 'r', 90-1);
  entity_9[90-1]='';
  entity_8 = (char*)malloc(entity_3*sizeof(char));
  entity_8[entity_3-1]='';
  strcpy(entity_8, entity_9);
}