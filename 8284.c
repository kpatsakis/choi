void fun()
{
  char entity_6[80] = "";
  entity_6 = NULL;
  char* entity_5;
  char entity_1[68] = "";
  entity_1 = NULL;
  memset(entity_6, 'C', 80-1);
  entity_6[80-1]='';
  memset(entity_1, 'n', 68-1);
  entity_1[68-1]='';
  entity_5 = (char*)malloc(12*sizeof(char));
  entity_5[12-1]='';
  entity_6[84] = 's';
}