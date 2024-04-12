void fun()
{
  char entity_4[2] = "";
  entity_4 = NULL;
  char* entity_8;
  memset(entity_4, 'J', 2-1);
  entity_4[2-1]='';
  entity_8 = (char*)malloc(50*sizeof(char));
  entity_8[50-1]='';
  memcpy(entity_8, entity_4, 2*sizeof(char));
}