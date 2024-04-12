void fun()
{
  int entity_7 = 45;
  char entity_3[57] = "";
  entity_3 = NULL;
  char* entity_8;
  char entity_2[82] = "";
  entity_2 = NULL;
  entity_8 = (char*)malloc(46*sizeof(char));
  entity_8[46-1]='';
  memset(entity_2, 'y', 82-1);
  entity_2[82-1]='';
  memset(entity_3, 'H', 57-1);
  entity_3[57-1]='';
  entity_7 = 65;
  entity_3[entity_7] = 'X';
}