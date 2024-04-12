void fun()
{
  char entity_6[55] = "";
  entity_6 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(26*sizeof(char));
  entity_5[26-1]='';
  memset(entity_6, 'Z', 55-1);
  entity_6[55-1]='';
  memcpy(entity_5, entity_6, 55*sizeof(char));
}