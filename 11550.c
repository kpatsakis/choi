void fun()
{
  char* entity_2;
  char entity_6[67] = "";
  char entity_8 = 'H';
  entity_2 = (char*)malloc(41*sizeof(char));
  entity_2[0]='0';
  memset(entity_6, 'e', 67-1);
  entity_6[67-1]='0';
  strcpy(entity_2, entity_6);
}