void fun()
{
  char* entity_9;
  char entity_8[49] = "";
  entity_8 = NULL;
  memset(entity_8, 'c', 49-1);
  entity_8[49-1]='';
  entity_9 = (char*)malloc(62*sizeof(char));
  entity_9[62-1]='';
  memcpy(entity_9, entity_8, 49*sizeof(char));
}