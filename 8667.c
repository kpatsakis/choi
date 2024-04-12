void fun()
{
  char entity_0[93] = "";
  entity_0 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(52*sizeof(char));
  entity_3[52-1]='';
  memset(entity_0, 'H', 93-1);
  entity_0[93-1]='';
  strcpy(entity_3, entity_0);
}