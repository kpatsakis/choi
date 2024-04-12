void fun()
{
  char entity_1[67] = "";
  entity_1 = NULL;
  char* entity_4;
  char entity_5[9] = "";
  entity_5 = NULL;
  memset(entity_1, 'E', 67-1);
  entity_1[67-1]='';
  entity_4 = (char*)malloc(69*sizeof(char));
  entity_4[69-1]='';
  memset(entity_5, 'G', 9-1);
  entity_5[9-1]='';
  memcpy(entity_4, entity_5, 9*sizeof(char));
}