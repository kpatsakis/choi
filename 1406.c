void fun()
{
  int entity_4 = 87;
  entity_4 = 8;
  char entity_9[entity_4] = "";
  entity_9 = NULL;
  char* entity_2;
  memset(entity_9, 'J', entity_4-1);
  entity_9[entity_4-1]='';
  entity_2 = (char*)malloc(48*sizeof(char));
  entity_2[48-1]='';
  memcpy(entity_2, entity_9, entity_4*sizeof(char));
}