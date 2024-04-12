void fun()
{
  char entity_8[51] = "";
  entity_8 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(99*sizeof(char));
  entity_9[99-1]='';
  memset(entity_8, 'M', 51-1);
  entity_8[51-1]='';
  memcpy(entity_9, entity_8, 51*sizeof(char));
}