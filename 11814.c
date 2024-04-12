void fun()
{
  char entity_6[66] = "";
  char* entity_5;
  char* entity_1;
  char entity_0[58] = "";
  memset(entity_0, 't', 58-1);
  entity_0[58-1]='0';
  memset(entity_6, 'T', 66-1);
  entity_6[66-1]='0';
  entity_1 = (char*)malloc(40*sizeof(char));
  entity_1[0]='0';
  entity_5 = (char*)malloc(92*sizeof(char));
  entity_5[0]='0';
  strcpy(entity_5, entity_0);
}