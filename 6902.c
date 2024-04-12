void fun()
{
  char entity_4[30] = "";
  entity_4 = NULL;
  char entity_0 = 'R';
  char* entity_5;
  memset(entity_4, 'd', 30-1);
  entity_4[30-1]='';
  entity_5 = (char*)malloc(9*sizeof(char));
  entity_5[9-1]='';
  memcpy(entity_5, entity_4, 30*sizeof(char));
}