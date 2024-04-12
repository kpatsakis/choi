void fun()
{
  int entity_4 = 98;
  char entity_5[entity_4] = "";
  entity_5 = NULL;
  char* entity_7;
  char* entity_8;
  entity_8 = (char*)malloc(10*sizeof(char));
  entity_8[10-1]='';
  memset(entity_5, 'o', entity_4-1);
  entity_5[entity_4-1]='';
  entity_7 = (char*)malloc(46*sizeof(char));
  entity_7[46-1]='';
  entity_4 = 89;
  entity_5[93] = 'D';
}