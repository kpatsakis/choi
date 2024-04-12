void fun()
{
  char entity_6[11] = "";
  entity_6 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(53*sizeof(char));
  entity_5[53-1]='';
  memset(entity_6, 'W', 11-1);
  entity_6[11-1]='';
  memcpy(entity_5, entity_6, 11*sizeof(char));
}