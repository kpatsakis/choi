void fun()
{
  int entity_2 = 97;
  char* entity_5;
  char entity_4[2] = "";
  entity_4 = NULL;
  entity_5 = (char*)malloc(entity_2*sizeof(char));
  entity_5[entity_2-1]='';
  memset(entity_4, 'k', 2-1);
  entity_4[2-1]='';
  strcpy(entity_5, entity_4);
}