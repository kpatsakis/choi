void fun()
{
  int entity_5 = 42;
  char entity_8 = 'K';
  char entity_6[entity_5] = "";
  entity_6 = NULL;
  char* entity_4;
  memset(entity_6, 'J', entity_5-1);
  entity_6[entity_5-1]='';
  entity_4 = (char*)malloc(72*sizeof(char));
  entity_4[72-1]='';
  memcpy(entity_4, entity_6, entity_5*sizeof(char));
}