void fun()
{
  char* entity_7;
  char entity_2[64] = "";
  entity_2 = NULL;
  entity_7 = (char*)malloc(24*sizeof(char));
  entity_7[24-1]='';
  memset(entity_2, 'x', 64-1);
  entity_2[64-1]='';
  memcpy(entity_7, entity_2, 64*sizeof(char));
}