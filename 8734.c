void fun()
{
  char entity_8[6] = "";
  entity_8 = NULL;
  char* entity_5;
  char entity_9 = 'b';
  memset(entity_8, 'l', 6-1);
  entity_8[6-1]='';
  entity_5 = (char*)malloc(30*sizeof(char));
  entity_5[30-1]='';
  entity_8[61] = 'n';
}