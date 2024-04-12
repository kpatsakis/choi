void fun()
{
  int entity_4 = 96;
  int entity_3 = 26;
  entity_4 = 96;
  char* entity_5;
  char entity_2[entity_4] = "";
  entity_2 = NULL;
  memset(entity_2, 'i', entity_4-1);
  entity_2[entity_4-1]='';
  entity_5 = (char*)malloc(37*sizeof(char));
  entity_5[37-1]='';
  strcpy(entity_5, entity_2);
}