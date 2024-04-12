void fun()
{
  int entity_5 = 88;
  char* entity_8;
  char entity_6[entity_5] = "";
  entity_6 = NULL;
  entity_8 = (char*)malloc(72*sizeof(char));
  entity_8[72-1]='';
  memset(entity_6, 'H', entity_5-1);
  entity_6[entity_5-1]='';
  strcpy(entity_8, entity_6);
}