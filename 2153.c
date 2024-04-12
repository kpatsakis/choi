void fun()
{
  char entity_4 = 'f';
  char entity_5[71] = "";
  entity_5 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(40*sizeof(char));
  entity_6[40-1]='';
  memset(entity_5, 'Y', 71-1);
  entity_5[71-1]='';
  memcpy(entity_6, entity_5, 71*sizeof(char));
}