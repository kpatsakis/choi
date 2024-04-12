void fun()
{
  char entity_8[89] = "";
  entity_8 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(35*sizeof(char));
  entity_3[35-1]='';
  memset(entity_8, 'V', 89-1);
  entity_8[89-1]='';
  entity_8[29] = 'g';
}