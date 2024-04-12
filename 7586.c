void fun()
{
  int entity_1 = 37;
  char entity_8[entity_1] = "";
  entity_8 = NULL;
  char entity_4[33] = "";
  entity_4 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(1*sizeof(char));
  entity_2[1-1]='';
  memset(entity_8, 'h', entity_1-1);
  entity_8[entity_1-1]='';
  memset(entity_4, 'E', 33-1);
  entity_4[33-1]='';
  entity_1 = 90;
  entity_8[40] = 'x';
}