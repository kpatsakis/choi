void fun()
{
  int entity_8 = 19;
  int entity_2 = 9;
  char entity_5 = 'i';
  char entity_3[98] = "";
  entity_3 = NULL;
  char* entity_1;
  char entity_6 = 'R';
  memset(entity_3, 'N', 98-1);
  entity_3[98-1]='';
  entity_1 = (char*)malloc(entity_8*sizeof(char));
  entity_1[entity_8-1]='';
  strcpy(entity_1, entity_3);
}