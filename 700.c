void fun()
{
  char entity_4[22] = "";
  entity_4 = NULL;
  char entity_5[93] = "";
  entity_5 = NULL;
  char* entity_7;
  memset(entity_5, 'Q', 93-1);
  entity_5[93-1]='';
  entity_7 = (char*)malloc(0*sizeof(char));
  entity_7[0-1]='';
  memset(entity_4, 'v', 22-1);
  entity_4[22-1]='';
  entity_5[10] = 'S';
}