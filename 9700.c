void fun()
{
  char entity_3[64] = "";
  entity_3 = NULL;
  char* entity_6;
  memset(entity_3, 'n', 64-1);
  entity_3[64-1]='';
  entity_6 = (char*)malloc(14*sizeof(char));
  entity_6[14-1]='';
  memcpy(entity_6, entity_3, 64*sizeof(char));
}