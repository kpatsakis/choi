void fun()
{
  char* entity_2;
  char entity_5[44] = "";
  memset(entity_5, 'y', 44-1);
  entity_5[44-1]='0';
  entity_2 = (char*)malloc(76*sizeof(char));
  entity_2[0]='0';
  entity_5[67] = 'n';
}