void fun()
{
  int entity_2 = 76;
  char* entity_5;
  char entity_3 = 'k';
  char entity_4 = 'x';
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  memset(entity_7, 'y', entity_2-1);
  entity_7[entity_2-1]='';
  entity_5 = (char*)malloc(55*sizeof(char));
  entity_5[55-1]='';
  strcpy(entity_5, entity_7);
}