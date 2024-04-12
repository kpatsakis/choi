void fun()
{
  char* entity_4;
  char entity_2[90] = "";
  char entity_3[4] = "";
  char entity_9[82] = "";
  memset(entity_9, 'R', 82-1);
  entity_9[82-1]='0';
  memset(entity_3, 'j', 4-1);
  entity_3[4-1]='0';
  entity_4 = (char*)malloc(51*sizeof(char));
  entity_4[0]='0';
  memset(entity_2, 'A', 90-1);
  entity_2[90-1]='0';
  entity_2[1] = 'D';
}