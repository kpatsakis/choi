void fun()
{
  char* entity_3;
  char entity_4[34] = "";
  char entity_2 = 'k';
  memset(entity_4, 'W', 34-1);
  entity_4[34-1]='0';
  entity_3 = (char*)malloc(53*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_3, entity_4, 34*sizeof(char));
}