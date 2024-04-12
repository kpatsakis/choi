void fun()
{
  int entity_6 = 38;
  entity_6 = 38;
  char entity_1 = 's';
  char* entity_3;
  char entity_0 = 'G';
  char entity_5[entity_6] = "";
  entity_5 = NULL;
  memset(entity_5, 'o', entity_6-1);
  entity_5[entity_6-1]='';
  entity_3 = (char*)malloc(35*sizeof(char));
  entity_3[35-1]='';
  strcpy(entity_3, entity_5);
}