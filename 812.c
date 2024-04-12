void fun()
{
  char* entity_6;
  char entity_3[89] = "";
  entity_3 = NULL;
  entity_6 = (char*)malloc(33*sizeof(char));
  entity_6[33-1]='';
  memset(entity_3, 'M', 89-1);
  entity_3[89-1]='';
  entity_3[72] = 'V';
}