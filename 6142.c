void fun()
{
  int entity_6 = 15;
  char entity_4[80] = "";
  entity_4 = NULL;
  char entity_5[18] = "";
  entity_5 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[entity_6-1]='';
  memset(entity_5, 'y', 18-1);
  entity_5[18-1]='';
  memset(entity_4, 'N', 80-1);
  entity_4[80-1]='';
  strcpy(entity_7, entity_5);
}