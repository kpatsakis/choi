void fun()
{
  int entity_8 = 26;
  char entity_6[29] = "";
  entity_6 = NULL;
  char entity_3[entity_8] = "";
  entity_3 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(7*sizeof(char));
  entity_4[7-1]='';
  memset(entity_3, 'j', entity_8-1);
  entity_3[entity_8-1]='';
  memset(entity_6, 'y', 29-1);
  entity_6[29-1]='';
  entity_8 = 47;
  strcpy(entity_4, entity_3);
}