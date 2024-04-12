void fun()
{
  char* entity_5;
  char entity_7[31] = "";
  entity_7 = NULL;
  memset(entity_7, 'S', 31-1);
  entity_7[31-1]='';
  entity_5 = (char*)malloc(16*sizeof(char));
  entity_5[16-1]='';
  entity_7[33] = 'j';
}