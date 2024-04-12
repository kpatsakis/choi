void fun()
{
  char* entity_7;
  char entity_4[51] = "";
  entity_4 = NULL;
  entity_7 = (char*)malloc(41*sizeof(char));
  entity_7[41-1]='';
  memset(entity_4, 'i', 51-1);
  entity_4[51-1]='';
  memcpy(entity_7, entity_4, 51*sizeof(char));
}