void fun()
{
  int entity_1 = 18;
  char entity_4[41] = "";
  entity_4 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(55*sizeof(char));
  entity_2[55-1]='';
  memset(entity_4, 'O', 41-1);
  entity_4[41-1]='';
  strcpy(entity_2, entity_4);
}