void fun()
{
  int entity_8 = 73;
  char* entity_2;
  char entity_5[60] = "";
  entity_5 = NULL;
  memset(entity_5, 'l', 60-1);
  entity_5[60-1]='';
  entity_2 = (char*)malloc(entity_8*sizeof(char));
  entity_2[entity_8-1]='';
  memcpy(entity_2, entity_5, 60*sizeof(char));
}