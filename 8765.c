void fun()
{
  char* entity_1;
  char entity_2[59] = "";
  entity_2 = NULL;
  entity_1 = (char*)malloc(65*sizeof(char));
  entity_1[65-1]='';
  memset(entity_2, 'T', 59-1);
  entity_2[59-1]='';
  entity_2[41] = 'y';
}