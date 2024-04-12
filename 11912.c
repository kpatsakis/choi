void fun()
{
  int entity_7 = 12;
  char entity_2[66] = "";
  char* entity_8;
  char entity_4 = 'D';
  char* entity_3;
  entity_8 = (char*)malloc(37*sizeof(char));
  entity_8[0]='0';
  memset(entity_2, 'h', 66-1);
  entity_2[66-1]='0';
  entity_3 = (char*)malloc(68*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_8, entity_2);
}