void fun()
{
  char entity_4 = 'i';
  char* entity_2;
  char entity_1[47] = "";
  memset(entity_1, 'i', 47-1);
  entity_1[47-1]='0';
  entity_2 = (char*)malloc(88*sizeof(char));
  entity_2[0]='0';
  entity_1[55] = 'U';
}