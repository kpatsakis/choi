void fun()
{
  char* entity_7;
  char entity_8[61] = "";
  entity_7 = (char*)malloc(6*sizeof(char));
  entity_7[0]='0';
  memset(entity_8, 'G', 61-1);
  entity_8[61-1]='0';
  entity_8[60] = 'L';
}