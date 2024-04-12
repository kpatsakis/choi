void fun()
{
  char* entity_8;
  char entity_0 = 'S';
  char entity_5 = 's';
  char entity_6[57] = "";
  entity_6 = NULL;
  memset(entity_6, 'H', 57-1);
  entity_6[57-1]='';
  entity_8 = (char*)malloc(67*sizeof(char));
  entity_8[67-1]='';
  memcpy(entity_8, entity_6, 57*sizeof(char));
}