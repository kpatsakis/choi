void fun()
{
  int entity_8 = 50;
  char entity_3[30] = "";
  entity_3 = NULL;
  char entity_5[38] = "";
  entity_5 = NULL;
  char* entity_2;
  memset(entity_3, 'q', 30-1);
  entity_3[30-1]='';
  memset(entity_5, 'p', 38-1);
  entity_5[38-1]='';
  entity_2 = (char*)malloc(entity_8*sizeof(char));
  entity_2[entity_8-1]='';
  strcpy(entity_2, entity_5);
}