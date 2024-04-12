void fun()
{
  char* entity_3;
  char entity_8[77] = "";
  entity_8 = NULL;
  memset(entity_8, 'Y', 77-1);
  entity_8[77-1]='';
  entity_3 = (char*)malloc(61*sizeof(char));
  entity_3[61-1]='';
  memcpy(entity_3, entity_8, 77*sizeof(char));
}