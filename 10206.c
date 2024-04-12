void fun()
{
  char* entity_1;
  char entity_4[26] = "";
  entity_1 = (char*)malloc(68*sizeof(char));
  entity_1[0]='0';
  memset(entity_4, 'r', 26-1);
  entity_4[26-1]='0';
  entity_4[35] = 'g';
}