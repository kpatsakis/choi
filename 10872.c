void fun()
{
  char entity_1 = 'l';
  char entity_5[82] = "";
  char* entity_2;
  entity_2 = (char*)malloc(21*sizeof(char));
  entity_2[0]='0';
  memset(entity_5, 'g', 82-1);
  entity_5[82-1]='0';
  entity_5[42] = 'y';
}