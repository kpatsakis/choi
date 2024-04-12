void fun()
{
  int entity_8 = 12;
  char* entity_1;
  char* entity_0;
  char entity_4[48] = "";
  entity_4 = NULL;
  char entity_2 = 't';
  entity_1 = (char*)malloc(46*sizeof(char));
  entity_1[46-1]='';
  entity_0 = (char*)malloc(87*sizeof(char));
  entity_0[87-1]='';
  memset(entity_4, 'D', 48-1);
  entity_4[48-1]='';
  memcpy(entity_1, entity_4, 48*sizeof(char));
}