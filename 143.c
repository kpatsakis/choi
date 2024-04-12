void fun()
{
  int entity_8 = 54;
  char* entity_6;
  char entity_1[57] = "";
  entity_1 = NULL;
  char entity_4[19] = "";
  entity_4 = NULL;
  entity_6 = (char*)malloc(18*sizeof(char));
  entity_6[18-1]='';
  memset(entity_1, 'D', 57-1);
  entity_1[57-1]='';
  memset(entity_4, 's', 19-1);
  entity_4[19-1]='';
  strcpy(entity_6, entity_4);
}