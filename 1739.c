void fun()
{
  char* entity_2;
  char entity_4[8] = "";
  entity_4 = NULL;
  memset(entity_4, 'n', 8-1);
  entity_4[8-1]='';
  entity_2 = (char*)malloc(11*sizeof(char));
  entity_2[11-1]='';
  memcpy(entity_2, entity_4, 8*sizeof(char));
}