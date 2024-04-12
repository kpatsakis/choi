void fun()
{
  char* entity_1;
  char entity_7[35] = "";
  memset(entity_7, 'U', 35-1);
  entity_7[35-1]='0';
  entity_1 = (char*)malloc(43*sizeof(char));
  entity_1[0]='0';
  entity_7[89] = 'G';
}