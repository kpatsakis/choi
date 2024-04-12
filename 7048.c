void fun()
{
  int entity_4 = 12;
  entity_4 = 6;
  char entity_5[26] = "";
  entity_5 = NULL;
  char* entity_6;
  memset(entity_5, 'O', 26-1);
  entity_5[26-1]='';
  entity_6 = (char*)malloc(entity_4*sizeof(char));
  entity_6[entity_4-1]='';
  strcpy(entity_6, entity_5);
}