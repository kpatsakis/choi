void fun()
{
  int entity_9 = 13;
  char* entity_8;
  char entity_2[entity_9] = "";
  entity_2 = NULL;
  memset(entity_2, 'Y', entity_9-1);
  entity_2[entity_9-1]='';
  entity_8 = (char*)malloc(78*sizeof(char));
  entity_8[78-1]='';
  entity_9 = 69;
  strcpy(entity_8, entity_2);
}