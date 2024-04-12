void fun()
{
  char entity_2[69] = "";
  entity_2 = NULL;
  char* entity_0;
  char entity_4[84] = "";
  entity_4 = NULL;
  memset(entity_4, 'x', 84-1);
  entity_4[84-1]='';
  entity_0 = (char*)malloc(60*sizeof(char));
  entity_0[60-1]='';
  memset(entity_2, 'R', 69-1);
  entity_2[69-1]='';
  memcpy(entity_0, entity_4, 84*sizeof(char));
}