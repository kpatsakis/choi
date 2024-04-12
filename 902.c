void fun()
{
  int entity_9 = 21;
  entity_9 = 21;
  char* entity_3;
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  entity_3 = (char*)malloc(97*sizeof(char));
  entity_3[97-1]='';
  memset(entity_8, 'A', entity_9-1);
  entity_8[entity_9-1]='';
  strcpy(entity_3, entity_8);
}