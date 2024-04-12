void fun()
{
  char* entity_3;
  char entity_5[26] = "";
  entity_5 = NULL;
  char entity_4 = 'A';
  entity_3 = (char*)malloc(31*sizeof(char));
  entity_3[31-1]='';
  memset(entity_5, 'j', 26-1);
  entity_5[26-1]='';
  entity_5[7] = 'Z';
}