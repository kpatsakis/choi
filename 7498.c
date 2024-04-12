void fun()
{
  char entity_8[20] = "";
  entity_8 = NULL;
  char* entity_6;
  char entity_2[53] = "";
  entity_2 = NULL;
  memset(entity_8, 'k', 20-1);
  entity_8[20-1]='';
  entity_6 = (char*)malloc(76*sizeof(char));
  entity_6[76-1]='';
  memset(entity_2, 'K', 53-1);
  entity_2[53-1]='';
  entity_2[84] = 'u';
}