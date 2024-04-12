void fun()
{
  char entity_2[20] = "";
  entity_2 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(69*sizeof(char));
  entity_4[69-1]='';
  memset(entity_2, 'U', 20-1);
  entity_2[20-1]='';
  memcpy(entity_4, entity_2, 20*sizeof(char));
}