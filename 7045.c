void fun()
{
  int entity_3 = 12;
  char* entity_2;
  char entity_9[entity_3] = "";
  entity_9 = NULL;
  entity_2 = (char*)malloc(78*sizeof(char));
  entity_2[78-1]='';
  memset(entity_9, 'p', entity_3-1);
  entity_9[entity_3-1]='';
  memcpy(entity_2, entity_9, entity_3*sizeof(char));
}