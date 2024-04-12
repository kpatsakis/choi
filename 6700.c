void fun()
{
  int entity_4 = 36;
  char entity_6[77] = "";
  entity_6 = NULL;
  char entity_5[27] = "";
  entity_5 = NULL;
  char* entity_7;
  memset(entity_6, 'B', 77-1);
  entity_6[77-1]='';
  memset(entity_5, 'h', 27-1);
  entity_5[27-1]='';
  entity_7 = (char*)malloc(entity_4*sizeof(char));
  entity_7[entity_4-1]='';
  memcpy(entity_7, entity_5, 27*sizeof(char));
}