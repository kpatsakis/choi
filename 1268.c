void fun()
{
  char entity_8[8] = "";
  entity_8 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(37*sizeof(char));
  entity_9[37-1]='';
  memset(entity_8, 'J', 8-1);
  entity_8[8-1]='';
  memcpy(entity_9, entity_8, 8*sizeof(char));
}