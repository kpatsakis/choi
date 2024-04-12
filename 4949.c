void fun()
{
  int entity_4 = 84;
  char entity_9[entity_4] = "";
  entity_9 = NULL;
  char* entity_8;
  memset(entity_9, 'g', entity_4-1);
  entity_9[entity_4-1]='';
  entity_8 = (char*)malloc(30*sizeof(char));
  entity_8[30-1]='';
  memcpy(entity_8, entity_9, entity_4*sizeof(char));
}