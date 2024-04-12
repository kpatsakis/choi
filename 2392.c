void fun()
{
  int entity_7 = 97;
  char entity_8[entity_7] = "";
  entity_8 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(59*sizeof(char));
  entity_4[59-1]='';
  memset(entity_8, 'H', entity_7-1);
  entity_8[entity_7-1]='';
  entity_7 = 46;
  memcpy(entity_4, entity_8, entity_7*sizeof(char));
}