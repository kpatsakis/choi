void fun()
{
  int entity_2 = 62;
  char* entity_6;
  char entity_1[28] = "";
  entity_1 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(91*sizeof(char));
  entity_5[91-1]='';
  entity_6 = (char*)malloc(21*sizeof(char));
  entity_6[21-1]='';
  memset(entity_1, 'M', 28-1);
  entity_1[28-1]='';
  strcpy(entity_6, entity_1);
}