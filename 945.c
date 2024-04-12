void fun()
{
  int entity_5 = 99;
  char* entity_2;
  char entity_4[47] = "";
  entity_4 = NULL;
  memset(entity_4, 'O', 47-1);
  entity_4[47-1]='';
  entity_2 = (char*)malloc(entity_5*sizeof(char));
  entity_2[entity_5-1]='';
  entity_5 = 52;
  strcpy(entity_2, entity_4);
}