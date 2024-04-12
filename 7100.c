void fun()
{
  int entity_5 = 79;
  char entity_4[entity_5] = "";
  entity_4 = NULL;
  char* entity_6;
  memset(entity_4, 'H', entity_5-1);
  entity_4[entity_5-1]='';
  entity_6 = (char*)malloc(34*sizeof(char));
  entity_6[34-1]='';
  memcpy(entity_6, entity_4, entity_5*sizeof(char));
}