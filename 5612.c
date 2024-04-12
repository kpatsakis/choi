void fun()
{
  int entity_5 = 66;
  char entity_8[entity_5] = "";
  entity_8 = NULL;
  char* entity_7;
  char entity_3[51] = "";
  entity_3 = NULL;
  memset(entity_8, 'Q', entity_5-1);
  entity_8[entity_5-1]='';
  memset(entity_3, 'h', 51-1);
  entity_3[51-1]='';
  entity_7 = (char*)malloc(11*sizeof(char));
  entity_7[11-1]='';
  entity_5 = 43;
  memcpy(entity_7, entity_8, entity_5*sizeof(char));
}