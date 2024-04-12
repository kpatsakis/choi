void fun()
{
  char* entity_2;
  char entity_5[25] = "";
  entity_5 = NULL;
  memset(entity_5, 'K', 25-1);
  entity_5[25-1]='';
  entity_2 = (char*)malloc(32*sizeof(char));
  entity_2[32-1]='';
  memcpy(entity_2, entity_5, 25*sizeof(char));
}