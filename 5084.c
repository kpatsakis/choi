void fun()
{
  char* entity_0;
  char entity_4[2] = "";
  entity_4 = NULL;
  memset(entity_4, 'y', 2-1);
  entity_4[2-1]='';
  entity_0 = (char*)malloc(69*sizeof(char));
  entity_0[69-1]='';
  memcpy(entity_0, entity_4, 2*sizeof(char));
}