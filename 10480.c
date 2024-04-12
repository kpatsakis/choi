void fun()
{
  char* entity_2;
  char entity_3[82] = "";
  memset(entity_3, 'o', 82-1);
  entity_3[82-1]='0';
  entity_2 = (char*)malloc(26*sizeof(char));
  entity_2[0]='0';
  entity_3[51] = 'U';
}