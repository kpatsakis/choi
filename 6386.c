void fun()
{
  char entity_3[51] = "";
  entity_3 = NULL;
  char* entity_7;
  char entity_8[37] = "";
  entity_8 = NULL;
  memset(entity_3, 'm', 51-1);
  entity_3[51-1]='';
  memset(entity_8, 'M', 37-1);
  entity_8[37-1]='';
  entity_7 = (char*)malloc(90*sizeof(char));
  entity_7[90-1]='';
  entity_3[76] = 'V';
}