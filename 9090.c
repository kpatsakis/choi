void fun()
{
  int entity_2 = 80;
  char entity_6[entity_2] = "";
  entity_6 = NULL;
  char* entity_9;
  memset(entity_6, 'l', entity_2-1);
  entity_6[entity_2-1]='';
  entity_9 = (char*)malloc(78*sizeof(char));
  entity_9[78-1]='';
  memcpy(entity_9, entity_6, entity_2*sizeof(char));
}