void fun()
{
  char* entity_9;
  char entity_8[27] = "";
  entity_8 = NULL;
  memset(entity_8, 'c', 27-1);
  entity_8[27-1]='';
  entity_9 = (char*)malloc(31*sizeof(char));
  entity_9[31-1]='';
  memcpy(entity_9, entity_8, 27*sizeof(char));
}