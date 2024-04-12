void fun()
{
  char entity_3[96] = "";
  entity_3 = NULL;
  char* entity_8;
  memset(entity_3, 'e', 96-1);
  entity_3[96-1]='';
  entity_8 = (char*)malloc(75*sizeof(char));
  entity_8[75-1]='';
  memcpy(entity_8, entity_3, 96*sizeof(char));
}