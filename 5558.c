void fun()
{
  char* entity_0;
  char entity_7[88] = "";
  entity_7 = NULL;
  char* entity_5;
  memset(entity_7, 'u', 88-1);
  entity_7[88-1]='';
  entity_0 = (char*)malloc(41*sizeof(char));
  entity_0[41-1]='';
  entity_5 = (char*)malloc(24*sizeof(char));
  entity_5[24-1]='';
  memcpy(entity_0, entity_7, 88*sizeof(char));
}