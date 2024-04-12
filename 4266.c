void fun()
{
  char* entity_1;
  char entity_3[38] = "";
  entity_3 = NULL;
  memset(entity_3, 'k', 38-1);
  entity_3[38-1]='';
  entity_1 = (char*)malloc(37*sizeof(char));
  entity_1[37-1]='';
  entity_3[13] = 'H';
}