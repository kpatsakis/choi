void fun()
{
  int entity_1 = 45;
  char* entity_5;
  char entity_2 = 'b';
  char entity_4[83] = "";
  entity_4 = NULL;
  entity_5 = (char*)malloc(32*sizeof(char));
  entity_5[32-1]='';
  memset(entity_4, 'A', 83-1);
  entity_4[83-1]='';
  strcpy(entity_5, entity_4);
}