void fun()
{
  int entity_8 = 98;
  char entity_6[77] = "";
  char entity_0[66] = "";
  char* entity_4;
  char* entity_2;
  entity_4 = (char*)malloc(42*sizeof(char));
  entity_4[0]='0';
  memset(entity_0, 'i', 66-1);
  entity_0[66-1]='0';
  entity_2 = (char*)malloc(61*sizeof(char));
  entity_2[0]='0';
  memset(entity_6, 'b', 77-1);
  entity_6[77-1]='0';
  strcpy(entity_4, entity_6);
}