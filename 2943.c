void fun()
{
  char* entity_7;
  char entity_6[37] = "";
  entity_6 = NULL;
  char entity_0[57] = "";
  entity_0 = NULL;
  entity_7 = (char*)malloc(31*sizeof(char));
  entity_7[31-1]='';
  memset(entity_6, 'g', 37-1);
  entity_6[37-1]='';
  memset(entity_0, 'e', 57-1);
  entity_0[57-1]='';
  memcpy(entity_7, entity_6, 37*sizeof(char));
}