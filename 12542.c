void fun()
{
  int entity_2 = 60;
  char* entity_4;
  char* entity_6;
  char entity_3[66] = "";
  entity_6 = (char*)malloc(entity_2*sizeof(char));
  entity_6[0]='0';
  entity_4 = (char*)malloc(1*sizeof(char));
  entity_4[0]='0';
  memset(entity_3, 't', 66-1);
  entity_3[66-1]='0';
  strcpy(entity_6, entity_3);
}