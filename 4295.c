void fun()
{
  char* entity_8;
  char entity_6[99] = "";
  entity_6 = NULL;
  entity_8 = (char*)malloc(51*sizeof(char));
  entity_8[51-1]='';
  memset(entity_6, 'I', 99-1);
  entity_6[99-1]='';
  memcpy(entity_8, entity_6, 99*sizeof(char));
}