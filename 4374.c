void fun()
{
  int entity_3 = 57;
  int entity_2 = 43;
  char* entity_7;
  char entity_8 = 'b';
  char entity_4[98] = "";
  entity_4 = NULL;
  entity_7 = (char*)malloc(entity_3*sizeof(char));
  entity_7[entity_3-1]='';
  memset(entity_4, 'h', 98-1);
  entity_4[98-1]='';
  strcpy(entity_7, entity_4);
}