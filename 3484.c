void fun()
{
  char entity_3[2] = "";
  entity_3 = NULL;
  char* entity_6;
  char* entity_0;
  entity_0 = (char*)malloc(15*sizeof(char));
  entity_0[15-1]='';
  entity_6 = (char*)malloc(98*sizeof(char));
  entity_6[98-1]='';
  memset(entity_3, 'G', 2-1);
  entity_3[2-1]='';
  strcpy(entity_0, entity_3);
}