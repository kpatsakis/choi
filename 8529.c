void fun()
{
  char entity_8[20] = "";
  entity_8 = NULL;
  char* entity_4;
  memset(entity_8, 'C', 20-1);
  entity_8[20-1]='';
  entity_4 = (char*)malloc(35*sizeof(char));
  entity_4[35-1]='';
  memcpy(entity_4, entity_8, 20*sizeof(char));
}