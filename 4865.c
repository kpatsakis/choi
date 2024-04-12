void fun()
{
  char entity_5[21] = "";
  entity_5 = NULL;
  char* entity_1;
  memset(entity_5, 'h', 21-1);
  entity_5[21-1]='';
  entity_1 = (char*)malloc(30*sizeof(char));
  entity_1[30-1]='';
  entity_5[48] = 'G';
}