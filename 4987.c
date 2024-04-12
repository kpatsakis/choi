void fun()
{
  char* entity_2;
  char entity_5[64] = "";
  entity_5 = NULL;
  entity_2 = (char*)malloc(60*sizeof(char));
  entity_2[60-1]='';
  memset(entity_5, 'z', 64-1);
  entity_5[64-1]='';
  entity_5[14] = 'N';
}