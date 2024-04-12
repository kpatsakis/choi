void fun()
{
  char* entity_4;
  char entity_2[49] = "";
  entity_2 = NULL;
  memset(entity_2, 'K', 49-1);
  entity_2[49-1]='';
  entity_4 = (char*)malloc(1*sizeof(char));
  entity_4[1-1]='';
  entity_2[70] = 'v';
}