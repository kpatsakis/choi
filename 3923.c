void fun()
{
  int entity_4 = 3;
  entity_4 = 3;
  char* entity_6;
  char entity_2[entity_4] = "";
  entity_2 = NULL;
  memset(entity_2, 'f', entity_4-1);
  entity_2[entity_4-1]='';
  entity_6 = (char*)malloc(87*sizeof(char));
  entity_6[87-1]='';
  strcpy(entity_6, entity_2);
}