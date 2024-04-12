void fun()
{
  char* entity_2;
  char entity_6[60] = "";
  entity_6 = NULL;
  entity_2 = (char*)malloc(43*sizeof(char));
  entity_2[43-1]='';
  memset(entity_6, 'x', 60-1);
  entity_6[60-1]='';
  entity_6[59] = 'd';
}