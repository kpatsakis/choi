void fun()
{
  char* entity_4;
  char entity_2[38] = "";
  entity_4 = (char*)malloc(62*sizeof(char));
  entity_4[0]='0';
  memset(entity_2, 'S', 38-1);
  entity_2[38-1]='0';
  entity_2[90] = 'k';
}