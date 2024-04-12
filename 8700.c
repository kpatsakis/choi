void fun()
{
  char* entity_1;
  char entity_0[67] = "";
  entity_0 = NULL;
  char entity_3[99] = "";
  entity_3 = NULL;
  entity_1 = (char*)malloc(41*sizeof(char));
  entity_1[41-1]='';
  memset(entity_3, 'm', 99-1);
  entity_3[99-1]='';
  memset(entity_0, 'w', 67-1);
  entity_0[67-1]='';
  entity_3[63] = 'L';
}