void fun()
{
  char entity_9[18] = "";
  entity_9 = NULL;
  char* entity_8;
  memset(entity_9, 'X', 18-1);
  entity_9[18-1]='';
  entity_8 = (char*)malloc(47*sizeof(char));
  entity_8[47-1]='';
  memcpy(entity_8, entity_9, 18*sizeof(char));
}