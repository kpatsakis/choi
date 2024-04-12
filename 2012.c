void fun()
{
  char* entity_2;
  char entity_0[95] = "";
  entity_0 = NULL;
  char entity_3 = 'B';
  entity_2 = (char*)malloc(20*sizeof(char));
  entity_2[20-1]='';
  memset(entity_0, 'X', 95-1);
  entity_0[95-1]='';
  strcpy(entity_2, entity_0);
}