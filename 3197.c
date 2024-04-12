void fun()
{
  int entity_0 = 96;
  char entity_2[entity_0] = "";
  entity_2 = NULL;
  char* entity_9;
  memset(entity_2, 'h', entity_0-1);
  entity_2[entity_0-1]='';
  entity_9 = (char*)malloc(78*sizeof(char));
  entity_9[78-1]='';
  entity_0 = 92;
  strcpy(entity_9, entity_2);
}