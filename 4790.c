void fun()
{
  int entity_5 = 86;
  char* entity_8;
  char entity_4[39] = "";
  entity_4 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(entity_5*sizeof(char));
  entity_3[entity_5-1]='';
  entity_8 = (char*)malloc(75*sizeof(char));
  entity_8[75-1]='';
  memset(entity_4, 'b', 39-1);
  entity_4[39-1]='';
  entity_5 = 75;
  memcpy(entity_3, entity_4, 39*sizeof(char));
}