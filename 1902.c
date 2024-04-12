void fun()
{
  int entity_1 = 56;
  char entity_5[83] = "";
  entity_5 = NULL;
  char* entity_4;
  char entity_2[56] = "";
  entity_2 = NULL;
  memset(entity_2, 'Q', 56-1);
  entity_2[56-1]='';
  entity_4 = (char*)malloc(entity_1*sizeof(char));
  entity_4[entity_1-1]='';
  memset(entity_5, 'l', 83-1);
  entity_5[83-1]='';
  strcpy(entity_4, entity_5);
}