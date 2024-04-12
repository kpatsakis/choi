void fun()
{
  int entity_6 = 24;
  entity_6 = 37;
  char* entity_1;
  char entity_3[0] = "";
  entity_3 = NULL;
  char entity_4[71] = "";
  entity_4 = NULL;
  entity_1 = (char*)malloc(30*sizeof(char));
  entity_1[30-1]='';
  memset(entity_4, 'E', 71-1);
  entity_4[71-1]='';
  memset(entity_3, 'G', 0-1);
  entity_3[0-1]='';
  entity_4[entity_6] = 'X';
}