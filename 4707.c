void fun()
{
  int entity_5 = 39;
  char* entity_3;
  char entity_1[16] = "";
  entity_1 = NULL;
  memset(entity_1, 'u', 16-1);
  entity_1[16-1]='';
  entity_3 = (char*)malloc(46*sizeof(char));
  entity_3[46-1]='';
  strcpy(entity_3, entity_1);
}