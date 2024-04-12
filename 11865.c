void fun()
{
  char* entity_6;
  char entity_7[41] = "";
  entity_6 = (char*)malloc(6*sizeof(char));
  entity_6[0]='0';
  memset(entity_7, 'k', 41-1);
  entity_7[41-1]='0';
  memcpy(entity_6, entity_7, 41*sizeof(char));
}