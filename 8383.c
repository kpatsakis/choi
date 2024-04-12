void fun()
{
  int entity_4 = 28;
  char* entity_6;
  char entity_9[entity_4] = "";
  entity_9 = NULL;
  memset(entity_9, 'O', entity_4-1);
  entity_9[entity_4-1]='';
  entity_6 = (char*)malloc(99*sizeof(char));
  entity_6[99-1]='';
  entity_4 = 9;
  memcpy(entity_6, entity_9, entity_4*sizeof(char));
}