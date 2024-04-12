void fun()
{
  int entity_1 = 7;
  char* entity_2;
  char entity_4[43] = "";
  entity_4 = NULL;
  memset(entity_4, 'n', 43-1);
  entity_4[43-1]='';
  entity_2 = (char*)malloc(14*sizeof(char));
  entity_2[14-1]='';
  strcpy(entity_2, entity_4);
}