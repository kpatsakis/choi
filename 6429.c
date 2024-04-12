void fun()
{
  int entity_3 = 33;
  char* entity_8;
  char entity_2[44] = "";
  entity_2 = NULL;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  memset(entity_2, 'n', 44-1);
  entity_2[44-1]='';
  entity_8 = (char*)malloc(31*sizeof(char));
  entity_8[31-1]='';
  memset(entity_6, 'l', entity_3-1);
  entity_6[entity_3-1]='';
  memcpy(entity_8, entity_6, entity_3*sizeof(char));
}