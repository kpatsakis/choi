void fun()
{
  int entity_5 = 73;
  char* entity_4;
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  memset(entity_2, 'a', entity_5-1);
  entity_2[entity_5-1]='';
  entity_4 = (char*)malloc(65*sizeof(char));
  entity_4[65-1]='';
  memcpy(entity_4, entity_2, entity_5*sizeof(char));
}