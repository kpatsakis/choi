void fun()
{
  int entity_3 = 72;
  int entity_1 = 60;
  int entity_4 = 68;
  char* entity_7;
  char entity_2[entity_4] = "";
  entity_2 = NULL;
  memset(entity_2, 'K', entity_4-1);
  entity_2[entity_4-1]='';
  entity_7 = (char*)malloc(58*sizeof(char));
  entity_7[58-1]='';
  strcpy(entity_7, entity_2);
}