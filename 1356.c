void fun()
{
  int entity_5 = 78;
  char* entity_9;
  char entity_8[entity_5] = "";
  entity_8 = NULL;
  entity_9 = (char*)malloc(35*sizeof(char));
  entity_9[35-1]='';
  memset(entity_8, 'i', entity_5-1);
  entity_8[entity_5-1]='';
  strcpy(entity_9, entity_8);
}