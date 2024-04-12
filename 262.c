void fun()
{
  char* entity_8;
  char entity_5[100] = "";
  entity_5 = NULL;
  entity_8 = (char*)malloc(33*sizeof(char));
  entity_8[33-1]='';
  memset(entity_5, 'e', 100-1);
  entity_5[100-1]='';
  memcpy(entity_8, entity_5, 100*sizeof(char));
}