void fun()
{
  char* entity_2;
  char* entity_3;
  char entity_6[66] = "";
  entity_3 = (char*)malloc(20*sizeof(char));
  entity_3[0]='0';
  entity_2 = (char*)malloc(76*sizeof(char));
  entity_2[0]='0';
  memset(entity_6, 'T', 66-1);
  entity_6[66-1]='0';
  entity_6[7] = 's';
}