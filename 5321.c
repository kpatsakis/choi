void fun()
{
  int entity_7 = 4;
  char entity_2[61] = "";
  entity_2 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(entity_7*sizeof(char));
  entity_4[entity_7-1]='';
  memset(entity_2, 'O', 61-1);
  entity_2[61-1]='';
  strcpy(entity_4, entity_2);
}