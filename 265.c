void fun()
{
  int entity_2 = 96;
  int entity_5 = 75;
  char entity_3[41] = "";
  entity_3 = NULL;
  char* entity_1;
  char entity_6 = 'J';
  char entity_0 = 's';
  memset(entity_3, 'S', 41-1);
  entity_3[41-1]='';
  entity_1 = (char*)malloc(entity_2*sizeof(char));
  entity_1[entity_2-1]='';
  strcpy(entity_1, entity_3);
}