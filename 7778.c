void fun()
{
  char* entity_7;
  char entity_3[86] = "";
  entity_3 = NULL;
  memset(entity_3, 'B', 86-1);
  entity_3[86-1]='';
  entity_7 = (char*)malloc(41*sizeof(char));
  entity_7[41-1]='';
  memcpy(entity_7, entity_3, 86*sizeof(char));
}