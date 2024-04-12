void fun()
{
  int entity_5 = 99;
  int entity_3 = 18;
  char entity_1[70] = "";
  entity_1 = NULL;
  char* entity_8;
  char entity_6[49] = "";
  entity_6 = NULL;
  entity_8 = (char*)malloc(entity_5*sizeof(char));
  entity_8[entity_5-1]='';
  memset(entity_1, 'j', 70-1);
  entity_1[70-1]='';
  memset(entity_6, 'Q', 49-1);
  entity_6[49-1]='';
  strcpy(entity_8, entity_6);
}