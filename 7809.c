void fun()
{
  int entity_0 = 86;
  char* entity_4;
  char entity_2[entity_0] = "";
  entity_2 = NULL;
  memset(entity_2, 'e', entity_0-1);
  entity_2[entity_0-1]='';
  entity_4 = (char*)malloc(59*sizeof(char));
  entity_4[59-1]='';
  entity_0 = 71;
  memcpy(entity_4, entity_2, entity_0*sizeof(char));
}