void fun()
{
  int entity_7 = 29;
  int entity_2 = 22;
  char* entity_1;
  char entity_8[75] = "";
  entity_8 = NULL;
  char entity_5[82] = "";
  entity_5 = NULL;
  memset(entity_8, 'l', 75-1);
  entity_8[75-1]='';
  entity_1 = (char*)malloc(entity_2*sizeof(char));
  entity_1[entity_2-1]='';
  memset(entity_5, 'v', 82-1);
  entity_5[82-1]='';
  strcpy(entity_1, entity_8);
}