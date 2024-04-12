void fun()
{
  int entity_4 = 73;
  char* entity_5;
  char entity_6[entity_4] = "";
  entity_6 = NULL;
  entity_5 = (char*)malloc(83*sizeof(char));
  entity_5[83-1]='';
  memset(entity_6, 'b', entity_4-1);
  entity_6[entity_4-1]='';
  strcpy(entity_5, entity_6);
}