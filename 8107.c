void fun()
{
  int entity_7 = 29;
  char* entity_6;
  char* entity_5;
  char entity_3[4] = "";
  entity_3 = NULL;
  char entity_8[45] = "";
  entity_8 = NULL;
  memset(entity_8, 'J', 45-1);
  entity_8[45-1]='';
  entity_5 = (char*)malloc(86*sizeof(char));
  entity_5[86-1]='';
  entity_6 = (char*)malloc(4*sizeof(char));
  entity_6[4-1]='';
  memset(entity_3, 'm', 4-1);
  entity_3[4-1]='';
  memcpy(entity_5, entity_8, 45*sizeof(char));
}