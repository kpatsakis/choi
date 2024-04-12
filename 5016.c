void fun()
{
  int entity_5 = 4;
  entity_5 = 3;
  char entity_8[entity_5] = "";
  entity_8 = NULL;
  char* entity_4;
  memset(entity_8, 'm', entity_5-1);
  entity_8[entity_5-1]='';
  entity_4 = (char*)malloc(39*sizeof(char));
  entity_4[39-1]='';
  entity_8[89] = 'I';
}