void fun()
{
  char* entity_9;
  char entity_4[26] = "";
  entity_4 = NULL;
  memset(entity_4, 'C', 26-1);
  entity_4[26-1]='';
  entity_9 = (char*)malloc(15*sizeof(char));
  entity_9[15-1]='';
  entity_4[16] = 'M';
}