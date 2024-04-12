void fun()
{
  char entity_2[18] = "";
  char* entity_1;
  memset(entity_2, 'u', 18-1);
  entity_2[18-1]='0';
  entity_1 = (char*)malloc(81*sizeof(char));
  entity_1[0]='0';
  entity_2[84] = 'o';
}