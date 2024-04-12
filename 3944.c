void fun()
{
  char* entity_3;
  char entity_6[25] = "";
  entity_6 = NULL;
  char entity_0[32] = "";
  entity_0 = NULL;
  entity_3 = (char*)malloc(31*sizeof(char));
  entity_3[31-1]='';
  memset(entity_6, 'O', 25-1);
  entity_6[25-1]='';
  memset(entity_0, 'E', 32-1);
  entity_0[32-1]='';
  memcpy(entity_3, entity_6, 25*sizeof(char));
}