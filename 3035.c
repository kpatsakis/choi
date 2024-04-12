void fun()
{
  char* entity_8;
  char entity_4 = 'X';
  char entity_9[96] = "";
  entity_9 = NULL;
  entity_8 = (char*)malloc(45*sizeof(char));
  entity_8[45-1]='';
  memset(entity_9, 'i', 96-1);
  entity_9[96-1]='';
  memcpy(entity_8, entity_9, 96*sizeof(char));
}