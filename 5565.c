void fun()
{
  char entity_4[11] = "";
  entity_4 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(24*sizeof(char));
  entity_3[24-1]='';
  memset(entity_4, 'q', 11-1);
  entity_4[11-1]='';
  memcpy(entity_3, entity_4, 11*sizeof(char));
}