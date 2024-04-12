void fun()
{
  int entity_0 = 48;
  char entity_5[71] = "";
  entity_5 = NULL;
  char entity_4[29] = "";
  entity_4 = NULL;
  char* entity_1;
  memset(entity_5, 'J', 71-1);
  entity_5[71-1]='';
  entity_1 = (char*)malloc(1*sizeof(char));
  entity_1[1-1]='';
  memset(entity_4, 'n', 29-1);
  entity_4[29-1]='';
  memcpy(entity_1, entity_5, 71*sizeof(char));
}