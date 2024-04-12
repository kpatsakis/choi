void fun()
{
  int entity_0 = 91;
  char entity_6[9] = "";
  entity_6 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(83*sizeof(char));
  entity_5[83-1]='';
  memset(entity_6, 'N', 9-1);
  entity_6[9-1]='';
  strcpy(entity_5, entity_6);
}