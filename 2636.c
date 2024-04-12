void fun()
{
  char* entity_8;
  char entity_4[75] = "";
  entity_4 = NULL;
  entity_8 = (char*)malloc(85*sizeof(char));
  entity_8[85-1]='';
  memset(entity_4, 'J', 75-1);
  entity_4[75-1]='';
  memcpy(entity_8, entity_4, 75*sizeof(char));
}