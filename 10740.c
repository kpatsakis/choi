void fun()
{
  char entity_8[36] = "";
  char* entity_3;
  entity_3 = (char*)malloc(33*sizeof(char));
  entity_3[0]='0';
  memset(entity_8, 'm', 36-1);
  entity_8[36-1]='0';
  entity_8[66] = 'd';
}