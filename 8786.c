void fun()
{
  int entity_8 = 37;
  char entity_1[12] = "";
  entity_1 = NULL;
  char* entity_5;
  char* entity_4;
  memset(entity_1, 'A', 12-1);
  entity_1[12-1]='';
  entity_5 = (char*)malloc(10*sizeof(char));
  entity_5[10-1]='';
  entity_4 = (char*)malloc(55*sizeof(char));
  entity_4[55-1]='';
  entity_1[entity_8] = 'X';
}