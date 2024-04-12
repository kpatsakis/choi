void fun()
{
  char entity_8[49] = "";
  entity_8 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(66*sizeof(char));
  entity_2[66-1]='';
  memset(entity_8, 'm', 49-1);
  entity_8[49-1]='';
  memcpy(entity_2, entity_8, 49*sizeof(char));
}