void fun()
{
  int entity_7 = 4;
  char* entity_4;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  entity_4 = (char*)malloc(58*sizeof(char));
  entity_4[58-1]='';
  memset(entity_5, 'Z', entity_7-1);
  entity_5[entity_7-1]='';
  entity_7 = 40;
  memcpy(entity_4, entity_5, entity_7*sizeof(char));
}