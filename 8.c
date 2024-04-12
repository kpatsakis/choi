void fun()
{
  int entity_0 = 92;
  int entity_4 = 34;
  char* entity_2;
  char entity_8[entity_4] = "";
  entity_8 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(46*sizeof(char));
  entity_1[46-1]='';
  entity_2 = (char*)malloc(99*sizeof(char));
  entity_2[99-1]='';
  memset(entity_8, 'I', entity_4-1);
  entity_8[entity_4-1]='';
  strcpy(entity_2, entity_8);
}