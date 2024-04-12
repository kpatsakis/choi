void fun()
{
  int entity_2 = 72;
  char* entity_6;
  char entity_8[83] = "";
  char entity_3[82] = "";
  entity_6 = (char*)malloc(entity_2*sizeof(char));
  entity_6[0]='0';
  memset(entity_3, 'F', 82-1);
  entity_3[82-1]='0';
  memset(entity_8, 'C', 83-1);
  entity_8[83-1]='0';
  entity_2 = 36;
  strcpy(entity_6, entity_3);
}