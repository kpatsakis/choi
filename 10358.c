void fun()
{
  char entity_3[86] = "";
  char* entity_6;
  memset(entity_3, 'G', 86-1);
  entity_3[86-1]='0';
  entity_6 = (char*)malloc(97*sizeof(char));
  entity_6[0]='0';
  entity_3[2] = 'i';
}