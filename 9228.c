void fun()
{
  char entity_3[2] = "";
  entity_3 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(32*sizeof(char));
  entity_6[32-1]='';
  memset(entity_3, 'L', 2-1);
  entity_3[2-1]='';
  entity_3[37] = 'j';
}