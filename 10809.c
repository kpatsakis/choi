void fun()
{
  char entity_5[35] = "";
  char* entity_1;
  memset(entity_5, 'q', 35-1);
  entity_5[35-1]='0';
  entity_1 = (char*)malloc(37*sizeof(char));
  entity_1[0]='0';
  entity_5[27] = 'e';
}