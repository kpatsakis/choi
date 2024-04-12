void fun()
{
  int entity_9 = 42;
  int entity_6 = 67;
  int entity_2 = 47;
  char entity_5[12] = "";
  entity_5 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(38*sizeof(char));
  entity_3[38-1]='';
  memset(entity_5, 'p', 12-1);
  entity_5[12-1]='';
  strcpy(entity_3, entity_5);
}