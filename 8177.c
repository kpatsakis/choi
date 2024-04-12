void fun()
{
  char entity_2[41] = "";
  entity_2 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(36*sizeof(char));
  entity_6[36-1]='';
  memset(entity_2, 'n', 41-1);
  entity_2[41-1]='';
  entity_2[28] = 'l';
}