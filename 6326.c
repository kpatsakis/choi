void fun()
{
  int entity_7 = 27;
  char entity_2[98] = "";
  entity_2 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(17*sizeof(char));
  entity_5[17-1]='';
  memset(entity_2, 'm', 98-1);
  entity_2[98-1]='';
  entity_2[entity_7] = 'r';
}