void fun()
{
  int entity_6 = 57;
  int entity_1 = 9;
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  char* entity_3;
  memset(entity_2, 'a', entity_1-1);
  entity_2[entity_1-1]='';
  entity_3 = (char*)malloc(55*sizeof(char));
  entity_3[55-1]='';
  strcpy(entity_3, entity_2);
}