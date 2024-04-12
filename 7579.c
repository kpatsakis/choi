void fun()
{
  char entity_1 = 'h';
  char* entity_4;
  char entity_3[98] = "";
  entity_3 = NULL;
  char* entity_2;
  memset(entity_3, 'B', 98-1);
  entity_3[98-1]='';
  entity_2 = (char*)malloc(40*sizeof(char));
  entity_2[40-1]='';
  entity_4 = (char*)malloc(66*sizeof(char));
  entity_4[66-1]='';
  strcpy(entity_4, entity_3);
}