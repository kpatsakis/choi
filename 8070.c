void fun()
{
  int entity_2 = 84;
  char* entity_5;
  char entity_6[90] = "";
  entity_6 = NULL;
  entity_5 = (char*)malloc(entity_2*sizeof(char));
  entity_5[entity_2-1]='';
  memset(entity_6, 'G', 90-1);
  entity_6[90-1]='';
  strcpy(entity_5, entity_6);
}