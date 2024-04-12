void fun()
{
  int entity_6 = 27;
  char entity_2[1] = "";
  entity_2 = NULL;
  char* entity_3;
  char* entity_4;
  entity_4 = (char*)malloc(98*sizeof(char));
  entity_4[98-1]='';
  memset(entity_2, 'K', 1-1);
  entity_2[1-1]='';
  entity_3 = (char*)malloc(58*sizeof(char));
  entity_3[58-1]='';
  strcpy(entity_4, entity_2);
}