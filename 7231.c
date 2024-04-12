void fun()
{
  int entity_4 = 37;
  char entity_6[56] = "";
  entity_6 = NULL;
  char* entity_5;
  memset(entity_6, 'A', 56-1);
  entity_6[56-1]='';
  entity_5 = (char*)malloc(entity_4*sizeof(char));
  entity_5[entity_4-1]='';
  strcpy(entity_5, entity_6);
}