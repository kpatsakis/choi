void fun()
{
  char entity_6[99] = "";
  entity_6 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(51*sizeof(char));
  entity_7[51-1]='';
  memset(entity_6, 'X', 99-1);
  entity_6[99-1]='';
  memcpy(entity_7, entity_6, 99*sizeof(char));
}