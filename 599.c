void fun()
{
  char entity_4[95] = "";
  entity_4 = NULL;
  char entity_7[13] = "";
  entity_7 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(50*sizeof(char));
  entity_5[50-1]='';
  memset(entity_7, 'D', 13-1);
  entity_7[13-1]='';
  memset(entity_4, 'h', 95-1);
  entity_4[95-1]='';
  entity_7[29] = 'z';
}