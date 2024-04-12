void fun()
{
  char* entity_8;
  char* entity_1;
  char entity_4[20] = "";
  entity_4 = NULL;
  entity_1 = (char*)malloc(69*sizeof(char));
  entity_1[69-1]='';
  entity_8 = (char*)malloc(43*sizeof(char));
  entity_8[43-1]='';
  memset(entity_4, 'V', 20-1);
  entity_4[20-1]='';
  strcpy(entity_8, entity_4);
}