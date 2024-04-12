void fun()
{
  char* entity_4;
  char entity_5[20] = "";
  entity_5 = NULL;
  memset(entity_5, 'g', 20-1);
  entity_5[20-1]='';
  entity_4 = (char*)malloc(100*sizeof(char));
  entity_4[100-1]='';
  memcpy(entity_4, entity_5, 20*sizeof(char));
}