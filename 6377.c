void fun()
{
  int entity_5 = 85;
  char* entity_4;
  char entity_6[80] = "";
  entity_6 = NULL;
  entity_4 = (char*)malloc(entity_5*sizeof(char));
  entity_4[entity_5-1]='';
  memset(entity_6, 'Q', 80-1);
  entity_6[80-1]='';
  memcpy(entity_4, entity_6, 80*sizeof(char));
}