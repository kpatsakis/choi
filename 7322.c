void fun()
{
  int entity_2 = 37;
  char* entity_5;
  char entity_3[entity_2] = "";
  entity_3 = NULL;
  memset(entity_3, 'w', entity_2-1);
  entity_3[entity_2-1]='';
  entity_5 = (char*)malloc(42*sizeof(char));
  entity_5[42-1]='';
  strcpy(entity_5, entity_3);
}