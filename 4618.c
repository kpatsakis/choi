void fun()
{
  char* entity_2;
  char entity_3[11] = "";
  entity_3 = NULL;
  entity_2 = (char*)malloc(24*sizeof(char));
  entity_2[24-1]='';
  memset(entity_3, 'K', 11-1);
  entity_3[11-1]='';
  memcpy(entity_2, entity_3, 11*sizeof(char));
}