void fun()
{
  int entity_2 = 51;
  entity_2 = 51;
  char* entity_5;
  char entity_3[entity_2] = "";
  entity_3 = NULL;
  memset(entity_3, 'Q', entity_2-1);
  entity_3[entity_2-1]='';
  entity_5 = (char*)malloc(17*sizeof(char));
  entity_5[17-1]='';
  strcpy(entity_5, entity_3);
}