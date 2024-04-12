void fun()
{
  int entity_8 = 15;
  char* entity_0;
  char entity_2[15] = "";
  entity_2 = NULL;
  entity_0 = (char*)malloc(38*sizeof(char));
  entity_0[38-1]='';
  memset(entity_2, 'f', 15-1);
  entity_2[15-1]='';
  strcpy(entity_0, entity_2);
}