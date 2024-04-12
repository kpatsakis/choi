void fun()
{
  int entity_8 = 86;
  char entity_6[entity_8] = "";
  entity_6 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(11*sizeof(char));
  entity_5[11-1]='';
  memset(entity_6, 'p', entity_8-1);
  entity_6[entity_8-1]='';
  memcpy(entity_5, entity_6, entity_8*sizeof(char));
}