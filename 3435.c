void fun()
{
  int entity_7 = 27;
  char* entity_5;
  char entity_4[87] = "";
  entity_4 = NULL;
  entity_5 = (char*)malloc(31*sizeof(char));
  entity_5[31-1]='';
  memset(entity_4, 'X', 87-1);
  entity_4[87-1]='';
  entity_4[64] = 'v';
}