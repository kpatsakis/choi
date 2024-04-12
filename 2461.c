void fun()
{
  int entity_4 = 43;
  char entity_3[entity_4] = "";
  entity_3 = NULL;
  char entity_7 = 's';
  char* entity_6;
  entity_6 = (char*)malloc(59*sizeof(char));
  entity_6[59-1]='';
  memset(entity_3, 'o', entity_4-1);
  entity_3[entity_4-1]='';
  entity_4 = 75;
  strcpy(entity_6, entity_3);
}