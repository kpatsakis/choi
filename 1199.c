void fun()
{
  char entity_5[5] = "";
  entity_5 = NULL;
  char entity_8 = 'S';
  char* entity_6;
  memset(entity_5, 'K', 5-1);
  entity_5[5-1]='';
  entity_6 = (char*)malloc(24*sizeof(char));
  entity_6[24-1]='';
  entity_5[67] = 'J';
}