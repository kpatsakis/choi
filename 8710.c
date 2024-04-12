void fun()
{
  char* entity_6;
  char entity_3[68] = "";
  entity_3 = NULL;
  char entity_5[58] = "";
  entity_5 = NULL;
  memset(entity_5, 'B', 58-1);
  entity_5[58-1]='';
  memset(entity_3, 'S', 68-1);
  entity_3[68-1]='';
  entity_6 = (char*)malloc(46*sizeof(char));
  entity_6[46-1]='';
  memcpy(entity_6, entity_3, 68*sizeof(char));
}