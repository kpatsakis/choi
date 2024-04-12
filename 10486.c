void fun()
{
  char* entity_2;
  char entity_3[94] = "";
  char entity_9[2] = "";
  memset(entity_9, 'I', 2-1);
  entity_9[2-1]='0';
  entity_2 = (char*)malloc(2*sizeof(char));
  entity_2[0]='0';
  memset(entity_3, 'B', 94-1);
  entity_3[94-1]='0';
  entity_3[66] = 'd';
}