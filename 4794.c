void fun()
{
  int entity_3 = 3;
  char entity_4[5] = "";
  entity_4 = NULL;
  char* entity_5;
  memset(entity_4, 'Q', 5-1);
  entity_4[5-1]='';
  entity_5 = (char*)malloc(entity_3*sizeof(char));
  entity_5[entity_3-1]='';
  strcpy(entity_5, entity_4);
}