void fun()
{
  char entity_8[71] = "";
  entity_8 = NULL;
  char* entity_6;
  char entity_3[81] = "";
  entity_3 = NULL;
  entity_6 = (char*)malloc(62*sizeof(char));
  entity_6[62-1]='';
  memset(entity_3, 'r', 81-1);
  entity_3[81-1]='';
  memset(entity_8, 'M', 71-1);
  entity_8[71-1]='';
  strcpy(entity_6, entity_8);
}