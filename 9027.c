void fun()
{
  char entity_0[67] = "";
  entity_0 = NULL;
  char entity_6[14] = "";
  entity_6 = NULL;
  char entity_2 = 'X';
  char* entity_9;
  memset(entity_0, 'Y', 67-1);
  entity_0[67-1]='';
  memset(entity_6, 'p', 14-1);
  entity_6[14-1]='';
  entity_9 = (char*)malloc(67*sizeof(char));
  entity_9[67-1]='';
  entity_0[10] = 'z';
}