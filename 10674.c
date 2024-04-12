void fun()
{
  char* entity_3;
  char entity_2[67] = "";
  entity_3 = (char*)malloc(18*sizeof(char));
  entity_3[0]='0';
  memset(entity_2, 'V', 67-1);
  entity_2[67-1]='0';
  entity_2[97] = 's';
}